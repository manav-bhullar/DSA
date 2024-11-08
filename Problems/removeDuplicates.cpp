#include <iostream>
using namespace std;

class Solution{
    public:

    int function(int* arr, int n){
        int counter = 0;
         cout << "Array before removing duplicates: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;


        if(n == 0){
            return 0;
        }
        for(int i = 0; i < n - 1; i++){
            if(arr[i] == arr[i + 1]){
                counter++;
                for(int j = i + 1; j < n - 1; j++){
                    arr[j] = arr[j + 1];
                }
                n--;
                i--;
            }
        }

         cout << "Array after removing duplicates: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

        return counter;
    }
};

int main(){
    int arr[] = {0,1,2,3,4,4,4,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    Solution s;
    s.function(arr, size);
}