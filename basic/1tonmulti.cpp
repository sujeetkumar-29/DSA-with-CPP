#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n:\n";
    cin >> n;

    for (int x = 1; x <= n; x++) {
        for (int i = 1; i <= 10; i++) {
            cout << (x * i) << " ";
        }
        cout << "\n";
    }
    return 0;
}