#include <iostream>
using namespace std;

template<typename T>
void print(T list[], int size) {
    for (int i = 0; i < size; i++) {
        cout << " " << list[i];
        if (i == size-1) cout << endl;
        else cout << ",";
    }
}

template<typename T>
void reverse(const T list[], T newList[], int size) {
    cout << "From:";
    print(list, size);
    for (int i = 0; i < size; i++)
    {
        newList[i] = list[size - i - 1];
    }
    cout << "To:";
    print(newList, size);
}

int main() {
    int list1[10],list3[10];
    double list2[10],list4[10];
    for (int i = 0; i < 10; i++) {
        int a;
        cin >> a;
        list1[i] = a;
    }
    for (int i = 0; i < 10; i++) {
        double b;
        cin >> b;
        list2[i] = b;
    }

    
    reverse(list1,list3,sizeof(list1)/sizeof(int));
    cout << endl;
    reverse(list2, list4, sizeof(list2) / sizeof(double));
}