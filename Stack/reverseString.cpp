#include <iostream>
#include <string>
#include <stack>
using namespace std;
void reverse(string &str) {
    stack<char> s;
    // Push all characters of the string into the stack
    for (int i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }
    
    // Pop from stack and assign to string
    for (int i = 0; i < str.length(); i++) {
        str[i] = s.top();
        s.pop();
    }
}
int main() {
    string str = "Hello";
    cout << "Original string: " << str << endl;
    reverse(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}
