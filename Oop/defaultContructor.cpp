#include<iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    // Default Constructor
    Point() {
        x = 0;
        y = 0;
    }

    // Parameterized Constructor
    Point(int x1, int y1) {
        x = x1;
        y = y1;
    }

    void print() {
        cout << x << " " << y << endl;
    }
};

int main() {
    Point p1, p2(10, 20); // Using default and parameterized constructors
    p1.print();           // Output: 0 0
    p2.print();           // Output: 10 20
    return 0;
}