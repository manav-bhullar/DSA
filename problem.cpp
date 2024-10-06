#include <iostream>
using namespace std;

int main (){
    int n = 336;
    int input = n;
    int  divide = 0;
    while (n != 0){
        if (input % (n % 10) == 0){
            divide++;
        }
        n = n/10;
    }
    cout << divide << endl;
}


