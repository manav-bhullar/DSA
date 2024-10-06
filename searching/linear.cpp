#include <iostream>

using namespace std;

int linearSearch(int arr[],int size, int key){
    for (int i = 0; i < size; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 5;
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = linearSearch(arr, size, key);

    if (result == -1){
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index " << result << endl;
    }
    return 0;
}