#include <iostream>
#include <string>
using namespace std;
int main()
{
    int* p= new int;
    *p=10;
    cout<<"Value of p: "<<*p<<endl;
    delete p;
    return 0;
}