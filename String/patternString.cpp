#include <bits/stdc++.h>
using namespace std;

// Function to find and print all occurrences of the pattern
void printIndex(string text, string pat) {
    int found = text.find(pat); // Find the first occurrence of the pattern

    // Loop until no more occurrences are found
    while (found != string::npos) {
        cout << "Pattern found at " << found << endl;
        found = text.find(pat, found + 1); // Search for the next occurrence
    }
}

int main() {
    string text, pat;
    cin >> text >> pat; // Input text and pattern

    printIndex(text, pat); // Call the function to search for the pattern

    return 0;
}