#include <iostream>

using namespace std;

void sort(int arr[], int s){
    for (int i = 0; i < s; i++){
        for (int j = 0; j < s - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < s; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {5,434,34,34,2,424,4,2,344,24,4,4,};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, size);

    return 0;

}