#include <iostream>
using namespace std;

class Solution{
    private:
    int* arr;
    int size;

    public:
    Solution(int* arr, int n): arr(arr), size(n) {
        int low = 0;
        int high = n-1;
    }

    int partition(int* arr,int low, int high){
        int pivot = arr[low];
        int i = low + 1; 
        int j = high;
        while(i < j){
            while(arr[i] <= pivot && i <= high){
                i++;
            }

            while(arr[j] > pivot && j >= low){
                j--;
            }

            if(i < j){
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[low], arr[j]);

        return j;
    }

    void qSort(int low, int high){
        if(low< high){
            int pivotIndex = partition(arr, low, high);
            qSort(low, pivotIndex - 1);
            qSort(pivotIndex + 1, high);
        }
    }

    void display(){
        for(int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
        }
        cout << endl;
    }

    void sort(){
        cout<<"before sorting "<<endl;
        display();
        cout<<"after sorting "<<endl;
        qSort(0, size - 1);
        display();
    }
};

int main() {
    int arr[] = {23, 45, 16, 37, 3, 99, 22, 84, 72, 18};
    int size = sizeof(arr)/sizeof(arr[0]);

    Solution a(arr, size);
    a.sort();
    
    return 0;
}