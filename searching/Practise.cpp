#include <iostream>

using namespace std;

int linear(int arr[], int f, int s){
    int i = 0;
    while(arr[i] != f && i < s){
        i++;
    }
    if (i < s){
    return i + 1;
    }
    else
    return -1;
}

int binary(int arr[], int f, int s){
    int start = 0, end = s - 1;

    while (start <= end) {
        int mid = start + (end - start)/ 2;

        if ( arr[mid] == f){
        return mid + 1;
        }

        else if (arr[mid] > f){
            end = mid -1;

        }

        else if(arr[mid] < f){
            start = mid + 1;
        }
    }

    return -1;
}

int main(){
    int s, f;
    cout << "Enter the size of array"<<endl;
    cin >> s;
    int arr[s];

    cout << "now start entering "<<endl;
    for(int i = 0; i < s; i++){
        cout <<" Enter element No." << i + 1 << endl;
        cin >>  arr[i];
    }

    cout << "What is lost ? "<< endl;
    cin >> f;

    int pos = binary(arr, f, s);
    (pos == -1) ? cout << "Element " << f << " not found" << endl 
                : cout << "Element " << f << " found at " << pos << endl;
}