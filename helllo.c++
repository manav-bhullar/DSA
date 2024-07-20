#include <iostream>
using namespace std;

int main() {
    int q = 123456;
    int a = 0;
    int b = 1;
    
    while (q > 0){
        a = a + q % 10;
        b = b * (q % 10);
        q = q / 10;
    }

    int difference = b - a;
    cout << a << endl;
    cout << b << endl;
    cout << difference << endl;

    return 0;
}