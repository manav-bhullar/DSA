#include <iostream>

using namespace std;

void bubble(int arr[], int s){
    for (int i = 0; i < s; i++){
        for(int j = 0; j < s - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < s; i++){
        cout<<arr[i]<<" ";
    }
}

void selection(int arr[], int s){
    int min = 0, key;
    for(int i = 0; i < s; i++){
        for (int j = i + 1; j < s; j++){
            if (arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }

    for (int i = 0; i < s; i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int arr[] = {3,23,134,325,35,57678,7,345,43,43,2123};
    int s = sizeof(arr)/sizeof(arr[0]);

    selection(arr, s);

    return 0;
}