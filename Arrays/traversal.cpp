#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 40, 30, 45};

    for (int x : arr) {
        cout << x*2 << " ";
    }
   
    return 0;
}