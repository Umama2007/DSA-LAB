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
Student s1("Ali", 101 ); // stack object 
s1.display(); // simple normal stack display okay
Student* s2 = new Student("Ahmed", 105 ); // heap object
s2->display(); //heap use arrow stack use dot 
delete s2; // delete heap obj
return 0;
}
// note: Normal object → use .
 //Pointer to object → use ->