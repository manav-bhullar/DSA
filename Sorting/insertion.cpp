#include <iostream>

using namespace std;

class insertionSort{
    public:
    
    void sort(int arr[], int n){
        for(int i = 1; i < n; i++){
            int key = arr[i];
            int j = i - 1;
            while( j >= 0 && arr[j] > key){
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }
};

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    insertionSort obj;
    obj.sort(arr, n);

    cout << "Sorted array: "<< endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
