#include <iostream>
#include <string.h>
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
    int index = 0, top = 0;
    char stack[20], arr[20];
    for (int i = strlen(infix); i >= 0; i--)
        switch (infix[i])
        {
        case '(':
            while (stack[top] != ')')
                arr[++index] = stack[top--];
            top--;
            break;
        case ')':
            stack[++top] = infix[i];
            break;
        case '+':
        case '-':
        case '*':
        case '/':
            while (Priority(stack[top]) > Priority(infix[i]))
                arr[++index] = stack[top--];
            stack[++top] = infix[i];
            break;
        default:
            arr[++index] = infix[i];
            break;
        }
    while (top > 0)cout << stack[top--];
    while (index > 0)cout << arr[index--];
}

int main()
{
    char itemset[20];
    scanf("%s", itemset);
    InfixToPostfix(itemset);
}