#include <iostream>
using namespace std;

template <typename T>
void InsertionSort(T list[], int listSize)
{
    cout << "From: ";
    for (int i = 0; i < listSize; i++) {
        cout << list[i];
        if (i < listSize - 1) cout << ",";
        else cout << endl;
    }
    for (int i = 1; i < listSize; i++)
    {
        T currentElement = list[i];
        int k;
        for (k = i - 1; k >= 0 && list[k] > currentElement; k--)
        {
            list[k + 1] = list[k];
        }
        list[k + 1] = currentElement;
    }
    cout << "To: ";
    for (int i = 0; i < listSize; i++) {
        cout << list[i];
        if (i < listSize - 1) cout << ",";
        else cout << endl;
    }
}

template <typename T>
int BinarySearch(const T list[], T key, int listSize)
{
    int low = 0;
    int high = listSize - 1;

    while (high >= low)
    {
        int mid = (low + high) / 2;
        if (key < list[mid])
            high = mid - 1;
        else if (key == list[mid])
            return mid;
        else
            low = mid + 1;
    }

    return -1;
}

int main()
{
    int list1[] = { 1,5,6,2,3,7,9,8,4 };
    double list2[] = { 1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4 };
    int a, b, c;
    double d, e, f;
    cin >> a >> b >> c;
    cin >> d >> e >> f;
    int b1[3] = { a,b,c };
    double b2[3] = { d,e,f };

    InsertionSort(list1, sizeof(list1)/sizeof(int));
    for (int i = 0; i < 3; i++) {
        cout<<b1[i]<<" at "<< BinarySearch(list1, b1[i], sizeof(list1) / sizeof(int))<<endl;
    }
    InsertionSort(list2, sizeof(list2) / sizeof(double));
    for (int i = 0; i < 3; i++) {
        cout << b2[i] << " at " << BinarySearch(list2, b2[i], sizeof(list2) / sizeof(double)) << endl;
    }


    return 0;
}