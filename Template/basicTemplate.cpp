#include<iostream>
using namespace std;

template <typename T>
T myMax(T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    cout << myMax<int>(3, 7) << endl;      // Max of two integers
    cout << myMax<char>('c', 'g') << endl; // Max of two characters
    return 0;
}