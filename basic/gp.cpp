#include <iostream>
#include <cmath>
using namespace std;

// CPP Program to find nth term of geometric progression
int main() {
    // Starting number
    int a = 3;

    // Common ratio
    int r = 2;

    // Nth term to be found
    int N = 5;

    // Calculate the Nth term
    int ans = a * (int)(pow(r, N - 1));

    // Display the output
    cout << ans;

    return 0;
}