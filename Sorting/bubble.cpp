#include <iostream>

using namespace std;

class bubbleSort{
    public:
    int counter = 1;
    void sort(int arr[], int n){
        while(counter < n){
            for(int i = 0; i < n - 1; i++){
                if(arr[i] > arr[i + 1]){
                    int temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
            }
            counter++;
        }
        cout << "Sorted array: "<< endl;
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
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

    bubbleSort obj;
    obj.sort(arr, n);
}                                           