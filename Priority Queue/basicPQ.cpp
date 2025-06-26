#include <iostream>
#include <queue> 
using namespace std;

int main() {
    priority_queue<int> pq;  

    pq.push(10);
    pq.push(15);
    pq.push(5);

    cout << "Size of priority queue: " << pq.size() << endl;
    cout << "Top element: " << pq.top() << endl;

    // Removing elements from the priority queue
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    
    return 0;
}