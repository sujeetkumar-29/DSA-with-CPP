#include<iostream>
using namespace std ;

int fun(int x, int y)
{
    return (x+y);
}
int main()
{
  	// Equivalent to int (*fun_ptr)(int, int) = fun;
    auto fun_ptr = fun;
    cout << fun_ptr(10, 20);
    return 0 ;
}