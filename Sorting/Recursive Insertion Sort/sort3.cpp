#include <iostream>
using namespace std;

class sorter{
    private:
    int size;
    int *arr;

    public:
    sorter(int* a, int n): size(n), arr(a){}

    void inner(int* arr, int i, int n){
        if(i == n){
            return;
        }
        int j = i;
        while( j > 0 && arr[j - 1]> arr[j]){
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
        inner(arr, i + 1, n);
    }
};

int main () {
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Before Using insertion Sort: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sorter s(arr, size);

    s.inner(arr, 0, size);

    cout << "After Using insertion Sort: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}