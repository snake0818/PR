#include <iostream>
using namespace std;

int* reverse(int list[], int size) {
	int* newList = new int[size];
	for (int i = 0; i < size; i++) {
		newList[i] = list[size - i - 1];
	}
	return newList;
}
void print(int list[],int size) {
	for (int i = 0; i < size; i++) {
		cout << " " << list[i];
		if (i == size - 1) cout << ",";
	}
	cout << endl;
}

int main() {
	int list[5];
	int* p;
	for (int i = 0; i < 5; i++) {
		int a;
		cin >> a;
		list[i] = a;
	}
	cout << "From:";
	print(list,5);
	p = reverse(list, 5);
	cout << "*reverse:";
	print(p,5);
}
