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
    //  create two Cars and store them in pointers
    Car* car1 = new Car("Toyota", "Corolla");
    Car* car2 = new Car("Honda", "Civic");
    // c: display details using arrow operator
    car1->display();
    car2->display();
    //  delete both heap objects properly
    delete car1;
    delete car2;
    return 0;
}