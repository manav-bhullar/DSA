#include <iostream>

using namespace std;

void selectionSort(int arr[], int n){
    int min;

    for(int i = 0; i < n-1; i++){
        min = i;
        for(int j = i ; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }

        }
            swap(arr[min], arr[i]);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, n);

    cout << "Sorted array: \n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}