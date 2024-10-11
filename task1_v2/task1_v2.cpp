#include <iostream>

using namespace std;

void swapColumns(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols - 1; j += 2) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][j + 1];
            matrix[i][j + 1] = temp;
        }
    }
}

int main() {
    int rows, cols;

    cout << "Input rows amount: ";
    cin >> rows;
    cout << "Input cols amount: ";
    cin >> cols;

    int** matrix = new int* [rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    cout << "Input matrix elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    swapColumns(matrix, rows, cols);

    cout << "Changed matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
