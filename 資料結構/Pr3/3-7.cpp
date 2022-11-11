#include <stdio.h>
#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    if (a == 0 || b == 0) return 0;
    if (a % b == 0)
        return b;
    return GCD(b, a % b);
}

int main(int argc, char *argv[])
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << GCD(n1, n2);
}