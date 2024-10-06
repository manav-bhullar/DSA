#include <iostream>
using namespace std;

class input{
    private:
    int n;

    public:
    input(int size): n(size){};
    
    void create(){
        int arr[n];
        for(int i = 0; i < n ; i++){
            cout<<"Enter element no."<<i + 1<<end;
            cin<<arr[i];
        }
    }

    int greatest(){
        int max = 0;
        for(int i = 0; i < n; i++){
            if(arr[max] < arr[i]){
                max = i;
            }
        }
        return min;
    }

    void createHash(){
        int max_array_size= arr[max] + 1;
        int hash[max_array_size] = {0}
        for (int i = 0 ; i < n ; i++){
            int temp  = arr[i];
            hash[temp] = hash[temp] + 1;
        }
    }
};