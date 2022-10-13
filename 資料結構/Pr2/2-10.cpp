#include <iostream>
using namespace std;

const int a_rows = 2;
const int b_rows = 3;
const int columns = 3;

void matrix_init(int a[][columns], int b[][columns])
{
    for (int i = 0; i < a_rows; i++)
        for (int j = 0; j < columns; j++)
            cin >> a[i][j];
    for (int i = 0; i < b_rows; i++)
        for (int j = 0; j < columns; j++)
            cin >> b[i][j];
}

void matrix_mul(int a[][columns], int b[][columns], int c[][columns])
{
    for (int i = 0; i < a_rows; i++)
        for (int j = 0; j < b_rows; j++)
            for (int k = 0; k < columns; k++)
                c[i][j] += a[i][k] * b[k][j];
}

void matrix_print(int arr[][columns])
{
    for (int i = 0; i < a_rows; i++)
        for (int j = 0; j < columns; j++)
            cout << arr[i][j] << " ";
}

int main(int argc, char *argv[])
{
    int A[a_rows][columns], B[b_rows][columns], C[a_rows][columns] = {0};
    matrix_init(A, B);
    matrix_mul(A, B, C);
    matrix_print(C);
}