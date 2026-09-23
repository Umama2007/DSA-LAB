#include <iostream>
using namespace std;
const int CAPACITY = 100;
int arr[CAPACITY]; // put capacity
int n = 0;
void traverse() {
    if (n == 0) {
        cout << "Array is empty\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// Find maximum value
int findMax() {
    if (n == 0) {
        cout << "Array is empty\n";
        return -1;
    }
    int maximum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }
    return maximum;
}
// Reverse the array
void reverseArray() {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
//  Remove all occurrences of a value
void removeAll(int value) {
    int newSize = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != value) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    n = newSize;
}
int main() {
    // main
    arr[n++] = 110;
    arr[n++] = 200;
    arr[n++] = 380;
    arr[n++] = 200;
    arr[n++] = 500;
    arr[n++] = 280;
    cout << "Original array: ";
    traverse();
    cout << "Maximum value: " << findMax() << endl;
    reverseArray();
    cout << "Reversed array: ";
    traverse();
    removeAll(200);
    cout << "After removing 200: ";
    traverse();
    return 0;
}