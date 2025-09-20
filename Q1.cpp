#include <iostream>
using namespace std;
const int MAX = 100;
int arr[MAX];
int n = 0;
void create() {
    cout << "Enter number of elements in the array: ";
    cin >> n;
    for (int i = 0; i < n; i++){
    cout << "Enter element "<<i+1<<" of the array: ";
    cin >> arr[i];
}
}
void display() {
    cout << "Array: ";
    for (int i = 0; i < n; i++){
       cout << arr[i] << " ";}
 	 cout << endl;
}
void insert() {
    int pos, val;
    cout << "Enter position to insert (0-indexed): ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> val;
    for (int i = n; i > pos; i--){
        arr[i] = arr[i - 1];}
    arr[pos] = val;
    n++;
}
void deleteElement() {
    int pos;
    cout << "Enter position to delete (0-indexed): ";
    cin >> pos;
    for (int i = pos; i < n - 1; i++){
        arr[i] = arr[i + 1];}
    n--;
}
void linearSearch() {
    int key, found = 0;
    cout << "Enter element to search: ";
    cin >> key;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Found at index: " << i << endl;
            found = 1;
        }
    }
    if (!found){
        cout << "Element not found.\n";}
}
int main() {
    int choice;
    do {                    
        cout<<"\nMENU\n1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.LINEAR SEARCH\n6.EXIT\n";
        cin >> choice;
        switch (choice) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insert(); break;
            case 4: deleteElement(); break;
            case 5: linearSearch(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice\n";
        }
    } while (choice != 6);
    return 0;}
