#include <iostream>
using namespace std;

void printSpiral(int size) {
    int matrix[size][size], value = 1;
    int minRow = 0, maxRow = size - 1, minCol = 0, maxCol = size - 1;

    while (value <= size * size) {
        for (int i = minCol; i <= maxCol; i++) matrix[minRow][i] = value++;
        minRow++;
        for (int i = minRow; i <= maxRow; i++) matrix[i][maxCol] = value++;
        maxCol--;
        for (int i = maxCol; i >= minCol; i--) matrix[maxRow][i] = value++;
        maxRow--;
        for (int i = maxRow; i >= minRow; i--) matrix[i][minCol] = value++;
        minCol++;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) cout << matrix[i][j] << "\t";
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;
    printSpiral(size);
    return 0;
}
