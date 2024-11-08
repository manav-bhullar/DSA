#include <iostream>
using namespace std;
 

class Solution{
    private:
    int* arr;
    int temp;
    int high, low, size;

    public:
    Solution(int* arr, int n): arr(arr), size(n){
        int low = 0; 
        int high = size - 1;
        temp = new int(size);

    }

    void mergeSort(int* arr, int low, int high){
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(low, mid, high);
    }

    void merge(int low, int mid, int high){
        int i = low;
        int j = mid + 1;
        int k = low
        while(i <= mid && j <= high){
            if (arr[i] < arr[j]){
                temp[k++] = arr[i++];
            }

            else
            temp[k++] = arr[j++];
        }

        while( i <= mid){
            temp[k++] = arr[i++];
        }

         while(j <= high){
            temp[k++] = arr[j++];
        }

        for(int i = low; i<=high; i++){
            arr[i] = temp[i];
    }
};