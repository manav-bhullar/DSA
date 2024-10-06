#include <iostream>
using namespace std;

void transpose(int matrix[][2], int r, int c) {  // Pass r and c as parameters
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Declare matrix with fixed size
    int matrix[3][2] = {
        {1, 2},
        {4, 5},
        {7, 8}
    };

    // Calculate rows and columns
    int r = sizeof(matrix)/sizeof(matrix[0]);
    int c = sizeof(matrix[0])/sizeof(matrix[0][0]);

    // Pass r and c to the transpose function
    transpose(matrix, r, c);

    return 0;
}