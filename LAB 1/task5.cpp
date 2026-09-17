#include <iostream>
#include <string>
using namespace std;
class Student {
public :
string name;
int rollNo ;
Student(string n, int r) 
{
name = n;
rollNo = r;
}
void display() {
cout << name << " " << rollNo << endl;
}
};
int main() {
Student s1("Ali", 101 );
s1.display();
Student* s2 = new Student("Ahmed", 105 );
s2->display();
delete s2;
return 0;
}