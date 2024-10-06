#include <iostream>

using namespace std;

int armstrong(int n);

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (armstrong(n) == n){
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}

int armstrong(int n ){
    int digits = 0;
    int sum = 0;
    int temp = n;
    while(temp > 0){
        digits++;
        temp /= 10;
    }
    temp = n;
    while  (temp > 0){
        int last_digit = temp % 10;
        sum += pow(last_digit, digits);
        temp /= 10;
    }
    return sum;
}