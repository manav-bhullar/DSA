#include <iostream>

using namespace std;

void bubbleSort(int arr[], int s){
    int temp;
    for(int i = 0; i < s; i++){

        for (int j = 0; j < s - i; j++){
            int p1 = arr[j];
            int p2 = arr[j + 1];

            if (arr[j] > arr[j + 1]){
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int s){
    for(int i = 0; i < s; i++){
        int min  = i;
        for(int j = i + 1; j < s; j++){;
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    
    }
}


void insertionSort(int arr[], int s){
    for(int i = 0; i < s; i++){
        int p1 = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > p1){
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = p1;
    }
}

void print (int arr[], int s){
    for(int i = 0; i< s; i++){
        cout<<arr[i] <<endl;
    }
}

int main () {
    int arr[] = {54,6546, 456,456,4567,456,4,654,654,645,564,};
    int s = sizeof(arr)/ sizeof(arr[0]);

    print(arr, s);
    cout<<endl;
    insertionSort(arr,s);
    print(arr, s);
    
    return 0;
}