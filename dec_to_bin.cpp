#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int fib(n){
        if(n == 0) return 0;
        if(n == 1) return 1;
        return fib(n-1) + fib(n-2);
    }
}