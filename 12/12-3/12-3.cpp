#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    int day = 0;
    char answer;
    vector<vector<vector<int>>>newdates(5, vector<vector<int>>(4, vector<int>(4)));
    int dates[5][4][4] = {
        {{1, 3, 5, 7},
         {9, 11, 13, 15},
         {17, 19, 21, 23},
         {25, 27, 29, 31}},
        {{2, 3, 6, 7},
         {10, 11, 14, 15},
         {18, 19, 22, 23},
         {26, 27, 30, 31}},
        {{4, 5, 6, 7},
         {12, 13, 14, 15},
         {20, 21, 22, 23},
         {28, 29, 30, 31}},
        {{8, 9, 10, 11},
         {12, 13, 14, 15},
         {24, 25, 26, 27},
         {28, 29, 30, 31}},
        {{16, 17, 18, 19},
         {20, 21, 22, 23},
         {24, 25, 26, 27},
         {28, 29, 30, 31}} };

    for (int v1 = 0; v1 < 5; v1++) {
        for (int v2 = 0; v2 < 4; v2++) {
            for (int v3 = 0; v3 < 4; v3++) {
                newdates[v1][v2][v3] = dates[v1][v2][v3];
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Is your birthday in Set" << (i + 1) << "?" << endl;
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
                cout << setw(3) << newdates[i][j][k] << " ";
            cout << endl;
        }
        cout << "\nEnter N for No and Y for Yes: ";
        cin >> answer;
        if (answer == 'Y')
            day += newdates[i][0][0];
    }

    cout << "Your birthday is " << day << endl;

    return 0;
}