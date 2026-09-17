#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    string name;
    int rollNo;
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};
int main() {
    Student s1, s2, s3;
    s1.name = "Ali";
    s1.rollNo = 101;
    s1.display();
    s2.name = "Aina";
    s2.rollNo = 264;
    s2.display();
    s3.name = "Ayehsa";
    s3.rollNo = 980;
    s3.display();
    return 0;
}