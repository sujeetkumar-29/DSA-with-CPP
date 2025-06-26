#include <iostream>
#include <queue>
using namespace std;

void mySort(int arr[], int n) {
    // Creating a Min Heap using the array elements
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr + n);

    // Extract elements from the heap and store them back in the array (sorted order)
    for (int i = 0; i < n; i++) {
        arr[i] = pq.top();  
        pq.pop();        
    }
}

int main() {
    int arr[] = {12, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    mySort(arr, n);

    // Print sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}