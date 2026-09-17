#include <iostream>
#include <string>
using namespace std;
class Student 
{ public:
string name;
int rollNo;
 Student(string n, int r) 
 {name=n; rollNo=r; }
void display()
{ cout<<name<<"-"<< rollNo<<endl; }
};
int  main()
 { Student s1("Sara",102);
  s1.display();
  Student s2("Alia",245);
  s2.display();
  Student s3("Ahmed",300);
  s3.display();
  return 0; 
}