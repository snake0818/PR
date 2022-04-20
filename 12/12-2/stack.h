#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;

template<typename T>
class Stack
{
public:
    Stack();
    Stack(const Stack&);
    ~Stack();
    bool empty() const;
    T peek() const;
    void push(int value);
    T pop();
    int getSize() const;
    void printStack(Stack&);

private:
    int* elements;
    int size;
    int capacity;
    void ensureCapacity();
};

template<typename T>
Stack<T>::Stack() : size(0), capacity(16)
{
    elements = new int[capacity];
}

template<typename T>
Stack<T>::Stack(const Stack& stack)
{
    elements = new int[stack.capacity];
    size = stack.size;
    capacity = stack.capacity;
    for (int i = 0; i < size; i++)
    {
        elements[i] = stack.elements[i];
    }
}

template<typename T>
Stack<T>::~Stack()
{
    delete[] elements;
}

template<typename T>
bool Stack<T>::empty() const
{
    return (size == 0);
}

template<typename T>
T Stack<T>::peek() const
{
    return elements[size - 1];
}

template<typename T>
void Stack<T>::push(int value)
{
    ensureCapacity();
    elements[size++] = value;
}

template<typename T>
void Stack<T>::ensureCapacity()
{
    if (size >= capacity)
    {
        int* old = elements;
        capacity = 2 * size;
        elements = new int[size * 2];

        for (int i = 0; i < size; i++)
            elements[i] = old[i];

        delete[] old;
    }
}

template<typename T>
T Stack<T>::pop()
{
    return elements[--size];
}

template<typename T>
int Stack<T>::getSize() const
{
    return size;
}

template<typename T>
void Stack<T>::printStack(Stack<T>& stack) {
    while (!stack.empty())
        cout << stack.pop() << " ";
    cout << endl;
}

#endif