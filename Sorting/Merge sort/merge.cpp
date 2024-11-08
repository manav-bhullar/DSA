#include <iostream>
using namespace std;

class Merge{
    private:
    int* arr;
    int size;
    int* temp;
    int low, high;

    public:
    Merge(int* arr, int size): arr(arr), size(size){
        temp = new int(size + 1);
        low = 0;
        high = size;
    }

    void mergeSort(int low, int high){
        if(low < high){
            int mid = (low + high) / 2;
            mergeSort( low, mid);
            mergeSort( mid + 1, high);
            merge( low, mid, high);
        }
    }

    void merge(int low, int mid, int high){
        int i = low;
        int j = mid + 1;
        int k = low;

        while(i <= mid && j <= high){
            if(arr[i] < arr[j]){
                temp[k] = arr[i];
                i++;
            }
            else{
                temp[k] = arr[j];
                j++;
            }
            k++;
        }

        while(i <= mid){
            temp[k++] = arr[i++];
        }

        while(j <= high){
            temp[k++] = arr[j++];
        }

        for(int i = low; i<=high; i++){
            arr[i] = temp[i];
        }

    }

    void sort() {
        mergeSort(0, size - 1);

    }

    void print(){
        for(int i = 0; i < size; i++){
            cout << arr[i]<<" ";
        }
        cout << endl;
    }

    
};

int main () {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    Merge m(arr, size);

    cout<<"original array: ";
    m.print();

    m.sort();

    cout<<"sorted array: ";

    m.print();

    return 0;
}