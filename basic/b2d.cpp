#include<iostream>
using namespace std;

int main()
{
    int n, val = 0, base = 1; 
    cin >> n;             
    
    while(n > 0)
    {
        int lastDigit = n % 10;  // Extract the last digit of the binary number
        val += (lastDigit * base); // Update the decimal value
        n /= 10;                // Remove the last digit from binary number
        base *= 2;              // Update the base for the next power of 2
    }
    
    cout << val; 
    return 0;
}