#include <iostream>
#include <string>
using namespace std;
class Car {
public:
    string brand;
    string model;
    Car(string b, string m) {
        brand = b;
        model = m;
    }
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }
};
    int main() {
        Car c1("Toyota", "Corolla"); //static
        c1.display(); //call by dot
        Car* c2 = new Car("Honda", "Civic"); //heap
        c2->display();// call by arrow
        delete c2; // delete heap
        return 0;
    }
