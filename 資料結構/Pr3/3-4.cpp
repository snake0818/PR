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

void InfixToPostfix(char infix[], char outfix[])
{
    int index = 0, top = 0;
    char stack[20];
    for (int i = 0; infix[i] != '\0'; i++)
        switch (infix[i])
        {
        case '(':
            stack[++top] = infix[i];
            break;
        case ')':
            while (stack[top] != '(')
                outfix[index++] = stack[top--];
            top--;
            break;
        case '+':
        case '-':
        case '*':
        case '/':
            while (Priority(stack[top]) >= Priority(infix[i]))
                outfix[index++] = stack[top--];
            stack[++top] = infix[i];
            break;
        default:
            outfix[index++] = infix[i];
            break;
        }
    while (top > 0)
        outfix[index++] = stack[top--];
}

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

int Eval(char infix[])
{
    char outfix[20];
    InfixToPostfix(infix, outfix);
    return Transfer(outfix);
}

int main(int argc, char* argv[]) {
    char itemset[20];
    scanf("%s", itemset);
    cout << Eval(itemset);
}