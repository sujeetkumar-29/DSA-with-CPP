#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(10); // Insert 10 at the top
    s.push(20); // Insert 20 at the top
    s.push(30); // Insert 30 at the top

    cout << "Stack size: " << s.size() << endl; 
    cout << "Top element: " << s.top() << endl; 

    s.pop(); // Remove the top element (30)
    cout << "Top after pop: " << s.top() << endl; 

    return 0;
}