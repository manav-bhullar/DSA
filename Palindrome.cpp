#include <iostream>

using namespace std;

void print_array(int arr[], int n) {
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void reverse_array(int arr[], int n){
    int p1 = 0, p2 = n-1;
    while(p1 < p2){
        swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }
    print_array(arr, n);
}

int main() {
    return 0;
}