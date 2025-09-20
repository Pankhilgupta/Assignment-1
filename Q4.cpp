#include <iostream>
using namespace std;
void reverseArray() {
    int maxsize = 100;
    int array[maxsize], n;
    cout << "Enter the size of array: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];}
    cout << "Your array is: ";
    for (int i = 0; i < n; i++)
        {cout << array[i] << " ";}
    for (int i = 0; i < n/2; i++) {
        int temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;   
    }
    cout << "\nReversed array is: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void matrixMultiplication() {
    int a[10][10], b[10][10], mul[10][10];
    int r1, c1, r2, c2;
    cout << "Enter no of rows and columns of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter no of rows and columns of second matrix: ";
    cin >> r2 >> c2;
    if (c1 != r2) {
        cout << "Multiplication not possible.\n";
        return ;
    }

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++){
            cin >> a[i][j];
}}
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++){
            cin >> b[i][j];
}}
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            mul[i][j] = 0;
            for (int k = 0; k < c1; k++)
                mul[i][j] += a[i][k] * b[k][j];
        }
    }

    cout << "Resultant matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++){cout << mul[i][j] << " ";}
        cout << endl;
    }
}
void matrixTranspose() {
    int a[10][10], trans[10][10], r, c;
    cout << "Enter the number of rows and columns: ";
    cin >> r >> c;
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> a[i][j];
}}
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            trans[j][i] = a[i][j];
}}
    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++){
            cout << trans[i][j] << " ";}
 cout << endl; }
}
int main() {
    int choice;
    do {
        cout << "\nMENU\n "<< "1. Reverse array\n"<< "2. Matrix multiplication\n"<< "3. Matrix transpose\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: reverseArray(); break;
            case 2: matrixMultiplication(); break;
            case 3: matrixTranspose(); break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
