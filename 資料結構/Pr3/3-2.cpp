#include <stdio.h>
#include <iostream>
using namespace std;

int Priority(char op)
{
    switch (op)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    default:
        return 0;
    }
}

void InfixToPostfix(char infix[])
{
    int top = 0;
    char stack[20];
    for (int i = 0; infix[i] != '\0'; i++)
        switch (infix[i])
        {
        case '(':
            stack[++top] = infix[i];
            break;
        case ')':
            while (stack[top] != '(')
                cout << stack[top--];
            top--;
            break;
        case '+':
        case '-':
        case '*':
        case '/':
            while (Priority(stack[top]) >= Priority(infix[i]))
                cout << stack[top--];
            stack[++top] = infix[i];
            break;
        default:
            cout << infix[i];
            break;
        }
    while (top > 0)
        cout << stack[top--];
}

int main(int argc, char *argv[])
{
    char itemset[20];
    scanf("%s", itemset);
    InfixToPostfix(itemset);
}