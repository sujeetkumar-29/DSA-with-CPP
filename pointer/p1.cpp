#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *p; 
    p = &x; 

    cout << x << '\n'; 
    cout << *p << '\n'; // Dereferences p to get the value at the address (10)
    cout << p << '\n';  // Prints the address stored in p (address of x)
    
    return 0;
}