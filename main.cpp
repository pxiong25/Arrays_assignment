#include <iostream>
using namespace std;

int main() {
    // original matrix 2D Array
    int matrix[4][5] = {
        {0, 0, 3, 0, 4},
        {0, 0, 5, 7, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 6, 0, 0}
    };

    // count non-zero values
    int nonZeroCount = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] != 0) {
                nonZeroCount++;
            }
        }
    }

    // sparse matrix
    int sparse[nonZeroCount][3]; // 3 columns: Row, Col, Value
    int index = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] != 0) {
                sparse[index][0] = i;        // row index
                sparse[index][1] = j;        // column index
                sparse[index][2] = matrix[i][j]; // value
                index++;
            }
        }
    }

    // cout sparse matrix
    cout << "Sparse Matrix Representation:" << endl;
    cout << "Row | Col | Value" << endl;
    cout << "-----------------" << endl; //for formatting purposes
    for (int i = 0; i < nonZeroCount; i++) {
        cout << sparse[i][0] << "   | " << sparse[i][1] << "   | " << sparse[i][2] << endl;
    }

    return 0;
}
