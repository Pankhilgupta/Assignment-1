#include <iostream>
using namespace std;
void sum(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        int sumrow = 0;
        for (int j = 0; j < 3; j++) {
            sumrow += arr[i][j];
        }
        cout << "sum of row " << i + 1 << " is " << sumrow << endl;
    }

    for (int j = 0; j < 3; j++) {
        int sumcolumn = 0;
        for (int i = 0; i < 3; i++) {
            sumcolumn += arr[i][j];
        }
        cout << "sum of column " << j + 1 << " is " << sumcolumn << endl;
    }
}

int main() {
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    sum(arr);
    
return 0;}
