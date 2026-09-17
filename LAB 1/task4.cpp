#include <iostream>
#include <string>
using namespace std;
int main()
{
    int* p= new int;//new int creates one integer box in heap memory.
                    //It gives us the address of that box.
                     //Pointer p stores that address.
    *p=10;
    cout<<"Value of p: "<<*p<<endl;
    delete p;// deelete that initilized adressed
    return 0;
}