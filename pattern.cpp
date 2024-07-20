#include <iostream>
using namespace std;
void pattern1(int n);
void pattern2(int n);
void pattern3(int n);
void pattern4(int n);
void pattern5(int n);
void pattern6(int n);
void pattern7(int n);
void pattern8(int n);
void pattern9(int n);
void pattern10(int n);
void pattern11(int n);
void pattern12(int n);
void pattern13(int n);
void pattern14(int n);
void pattern15(int n);
void pattern16(int n);
void pattern17(int n);
void pattern18(int n);
void pattern19(int n);
void pattern20(int n);
void pattern21(int n);
void pattern22(int n);



int main( ) {
    pattern16(5);
    return 0;
}

void pattern1(int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(int n){
    for (int i = 0; i<n+1; i++){
        for (int j = 0; j<i ; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int n){
    for (int i = 0; i<n+1; i++){
        for (int j = 0; j<i ; j++){
            cout << j+1;
        }
        cout << endl;
    }
}

void pattern4(int n) {
    for (int i = 1; i< n+1; i++){
        for(int j = 0; j < i; j++){
            cout << i;
        }
        cout << endl;
    }
}

void pattern5( int n) {
    for ( int i = 0; i < n; i++){
        for (int j = n - i; j > 0 ; j--){
            cout<<"*";
        }
        cout << endl;
    }
}

void pattern6(int n) {
    for (int i = n; i > 0; i--){
        for (int j = 1; j < i + 1; j++){
            cout << j;
        }
        cout << endl;
    }
}

void pattern7(int n) {
    for (int i = 0; i < n; i++){
        for (int j = n - i; j > 0; j--){
            cout << " ";
        }

        for (int k = 0; k < i + 1; k++){
            cout << "*";
        }
        for (int k = 0; k < i; k++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern8(int n) {
    for ( int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }

        for (int k = n ; k > i ; k--){
            cout << "*";
        }
        for (int k = n ; k > i + 1; k--){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern9(int n) {
    for (int i = 0; i < n; i++){
        for (int j = n - i; j > 0; j--){
            cout << " ";
        }

        for (int k = 0; k < i + 1; k++){
            cout << "*";
        }
        for (int k = 0; k < i; k++){
            cout << "*";
        }
        cout << endl;
    }

    for ( int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            cout << " ";
        }

        for (int k = n ; k > i ; k--){
            cout << "*";
        }
        for (int k = n ; k > i + 1; k--){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern10(int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 0; i < n; i++){
        for (int j = n - i; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }
}


void pattern11(int n){
    for (int i = 1; i < n + 1; i++){
        for (int j = 1; j < i + 1; j++){
            if( (i + j) % 2 == 0){
                cout << "1 ";
            }
            else{
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

void pattern12(int n){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            cout<< j + 1;
        }

        for ( int j = n - i - 1; j > 0; j--){
            cout << "  ";
        }
        
        for (int j = i; j > 0; j--){
            cout << j;
        }
        cout << endl;
    }
}
int a = 1;
void pattern13( int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++){
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
}


void pattern14( int n){
    for (int i = 0; i < n; i++){
        char start = 'A';
        for (int j = 0; j < i + 1; j++){
            cout << start << " ";
            start = start + 1;
        }
        cout << endl;
    }
}

void pattern15(int n){
    for(int i = 0; i < n + 1; i++){
        char start = 'A';
        for (int j = n - i; j > 0; j--){
            cout << start << " ";
            start++;
        }
        cout << endl;
    }
}

void pattern16(int n){
    char start = 'A';
    for(int i = 0; i < n; i++){
        for (int j = 0; j < i +; j++){
            cout << start << " ";
        }
        start++;
        cout << endl;
    }
}