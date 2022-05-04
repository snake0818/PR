#include <iostream>
#include "stack.h"
using namespace std;
//7-9/9-3*2
int main()
{
    int intArr[2];
    char ch;
    Stack<char> cs;
    for (int i = 0; i < 9; i++) {
        cin >> ch;
        cs.push(ch);
    }
    for (int i = 0; i < 4; i++) {
        int sum = 0;
        intArr[0] = cs.pop() - 48;
        ch = cs.pop();
        intArr[1] = cs.pop() - 48;

        if (ch == '+') {
            sum = intArr[1] + intArr[0];
            cout << sum << endl;
        }
        else if (ch == '-') {
            sum = intArr[1] - intArr[0];
            cout << sum << endl;
        }
        else if (ch == '*') {
            sum = intArr[1] * intArr[0];
            cout << sum << endl;
        }
        else if (ch == '/') {
            sum = intArr[1] / intArr[0];
            cout << sum << endl;
        }
        ch = sum + '0';
        cs.push(ch);

    }

    return 0;
}
