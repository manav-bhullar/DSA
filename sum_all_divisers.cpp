#include <iostream>

using namespace std;

int sod (int n);
int main(){
    sod(5);
}

int sod( int n){
    int sum = 0;
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= i; j++){
            if (i % j == 0){
                sum += j;
            }
        }
    }
    cout << sum<<endl;
    return sum;
}