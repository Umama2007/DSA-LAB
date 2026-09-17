#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    string name;
    int rollNo;
    Student() {
 name = "";
rollNo = 0; //This is a default constructor. It needs no input values.
    }
    void setData(string n, int r) {
        name = n;
        rollNo = r;
    }
    void display() {
        cout << name << " - " << rollNo << endl;
    }
};
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student* students = new Student[n];
    for (int i = 0; i < n; i++) {
        string name;
        int roll;
        cout << "Enter name and roll: ";
        cin >> name >> roll;
        students[i].setData(name, roll);
    }
    cout << "\nStudent List:\n";
    for (int i = 0; i < n; i++) {
        students[i].display();
    }
    delete[] students;
    return 0;
}
