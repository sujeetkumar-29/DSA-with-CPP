#include <iostream>
using namespace std;
class Base {
public:
    virtual void print() {
        cout << "In Base\n";
    }
};

class Derived : public Base {
public:
    void print() override {
        cout << "In Derived\n";
    }
};

int main() {
    Base b;
    Derived d;

    b.print(); // Output: In Base
    d.print(); // Output: In Derived

    Base *bp = &d;
    bp->print(); // Output: In Derived
}