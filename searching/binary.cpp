#include <iostream>

using namespace std;

int binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    while (start <= end){
        int mid = start + (end - start) / 2;
        if (arr[mid] == key){
            return mid;
        }
        
        else if (arr[mid] > key){
            end = mid - 1;
        }

        else if (arr[mid] < key){
            start = mid + 1;
        }


    }
        return - 1;
}

int main() {
    int array[] = {1,2,3,4,5,6,8,9};
    int n = sizeof(array) / sizeof(array[0]);
    int key = 5;
    cout << binarySearch(array, n, key) << endl;
}