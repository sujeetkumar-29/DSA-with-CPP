

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseKElements(queue<int>& q, int k) {
    if (q.empty() || k > q.size() || k <= 0) {
        return;
    }

    stack<int> s;

    // Step 1: Push first K elements into the stack
    for (int i = 0; i < k; i++) {
        s.push(q.front());
        q.pop();
    }

    // Step 2: Pop from stack and push back to the queue
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    // Step 3: Move the remaining (N-K) elements to the end
    int size = q.size();
    for (int i = 0; i < size - k; i++) {
        q.push(q.front());
        q.pop();
    }
}

// Utility function to print the queue
void printQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    int k = 3;

    cout << "Original Queue: ";
    printQueue(q);

    reverseKElements(q, k);

    cout << "Modified Queue: ";
    printQueue(q);

    return 0;
}