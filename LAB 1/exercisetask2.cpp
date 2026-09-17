#include <iostream>
using namespace std;
int main() {
 int* arr = new int[5]; // heap 
    for (int i = 0; i < 5; i++) {
    cout << "Enter " << i + 1 << " number : ";
    cin >> arr[i];
    }
    cout << "\nArray elements are:\n";
for (int i = 0; i < 5; i++) {
    cout << arr[i] << endl;
}
delete[] arr;
return 0;
}

 