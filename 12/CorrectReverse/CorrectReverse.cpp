#include <iostream>

using namespace std;
int* gList;

int* reverse(const int list[], int size)
{
    int* newList = new int[size];
    for (int i = 0; i < size; i++)
    {
        newList[i] = list[size - i - 1];
    }
    return newList;
}

void print(const int list[], int size)
{
    cout << list[0];
    for (int i = 1; i < size; i++)
    {
        cout << "," << list[i];
    }
}

int main()
{
    int Arr[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> Arr[i];
    }
    gList = reverse(Arr, 6);
    print(gList, 6);

}