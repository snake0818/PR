#include <stdio.h>
#include <iostream>
using namespace std;

int transform(char op, int n1, int n2)
{
    switch (op)
    {
    case '+':
        return n1 + n2;
    case '-':
        return n1 - n2;
    case '*':
        return n1 * n2;
    case '/':
        return n1 / n2;
    }
}

int Transfer(char postfix[])
{
    int stack[20] = {0};
    int top = 0;
    for (int i = 0; postfix[i] != '\0'; i++)
        switch (postfix[i])
        {
        case '+':
        case '-':
        case '*':
        case '/':
            stack[top - 1] = transform(postfix[i], stack[top - 1], stack[top]);
            top--;
            break;
        default:
            stack[++top] = postfix[i] - 48;
        }
    return stack[top];
}

int main(int argc, char *argv[])
{
    char itemset[20];
    scanf("%s", itemset);
    cout << Transfer(itemset);
}