#include <iostream>
using namespace std;
const int CAPACITY = 100;
int arr[CAPACITY];
int n = 0;
void traverse() // traverse opration is used here
  {
    if (n == 0) {
        cout << "Array is empty\n";
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int search(int value) // we are searching position of a value 
 {
    for (int i = 0; i < n; i++) {
        if (arr[i] == value)
            return i;
    }
    return -1;
}
void insertEnd(int value) // inserting at extyreme ends
 {
    if (n == CAPACITY) {
        cout << "Overflow!\n";
        return;
    }
    arr[n] = value;
    n++;
}
void insertAt(int index, int value) {
    if (index < 0 || index > n || n == CAPACITY) // setting capacity
     {
        cout << "Invalid operation\n";
        return;
    }
    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    n++;
}
void deleteAt(int index) // deleteeeeeeee
{
    if (index < 0 || index >= n) {
        cout << "Invalid index\n";
        return;
    }
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}
void update(int index, int newValue) // update valuye
 {
    if (index < 0 || index >= n) {
        cout << "Invalid index\n";
        return;
    }
    arr[index] = newValue;
}
int main() {
    for (int val = 60; val < 89; val += 2) {
        insertEnd(val);
    }
    cout << "n = " << n << "\n";
    traverse();
    int index = search(65);
    cout << "Search for 65 => " << index << "\n";
    insertEnd(90);
    cout << "After insertEnd(90): ";
    traverse();
    insertAt(2, 62);
    cout << "After insertAt(2, 62): ";
    traverse();
    deleteAt(3);
    cout << "After deleteAt(3): ";
    traverse();
    update(1, 88);
    cout << "After update(1, 88): ";
    traverse();
    return 0;
}
