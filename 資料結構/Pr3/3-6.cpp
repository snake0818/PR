#include <stdio.h>
#include <iostream>
using namespace std;

int Fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return Fib(n - 1) + Fib(n - 2);
}

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    cout << Fib(n);
}