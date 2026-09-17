#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x=1000000;
    int*ptr=&x; //stores the address of x inside ptr.
    cout<<"Value of x: "<<x<<endl;
    cout<<"Address of x: "<<&x<<endl;
    cout<<"pointer value: "<<ptr<<endl;
    cout<<"Value via ptr: "<<*ptr<<endl;
    return 0 ;
}
