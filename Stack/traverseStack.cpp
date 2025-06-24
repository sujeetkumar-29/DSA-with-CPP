#include<iostream>
#include<stack>

using namespace std;

int main()
{
   
    stack<int> stack;
    
    // The push function inserts elements
    // at the top of Stack
    stack.push(10);
    stack.push(20);
    stack.push(30);
    
    // After above operations, stack will 
    // look like:
    //     ******    
    //     * 30 *  <- Stack TOP
    //     * 20 *
    //     * 10 *
    //     ******
    
    // While stack is not empty
    while(!stack.empty())
    {
        // Print top element
        cout<<stack.top()<<" ";
        
        // Pop top element
        stack.pop();
    }
    
    return 0;
}