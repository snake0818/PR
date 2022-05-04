#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void stuAve(vector<vector<double>>& S1) {
    for (int v1 = 0; v1 < 5; v1++) {
        double sum = 0;
        for (int v2 = 0; v2 < 3; v2++) {
             sum+=S1[v1][v2];
        }
        S1[v1][3] = sum / 3.0;
    }
}

double* courseAve(vector<vector<double>> S1) {
    double* Ave = new double[3];
    for (int v2 = 0; v2 < 3; v2++) {
        double sum = 0;
        for (int v1 = 0; v1 < 5; v1++) {
            sum += S1[v1][v2];
        }
        Ave[v2] = sum / 5.0;
    }
    return Ave;
}

void print(vector<vector<double>> S1) {
    for (int v1 = 0; v1 < 5; v1++) {
        for (int v2 = 0; v2 < 4; v2++) {
            if(v2 > 0) cout << setw (5);
            cout << fixed << setprecision(1) << S1[v1][v2];
            if (v2 != 3) cout << ",";
        }
        cout << endl;
    }
}

void print(double* Arr, int size = 3) {
    for (int i = 0; i < size; i++) {
        cout << " " << Arr[i];
        if (i != size - 1) cout << ",";
    }
    cout << endl;
}

int main()
{
    vector<vector<double>>Student(5, vector<double>(4));
    double student[5][3] = {
        {80.0, 70.0, 90.0},
        {85.0, 77.0, 95.0},
        {83.0, 75.0, 70.0},
        {73.0, 95.0, 67.0},
        {88.0, 79.0, 71.0}
    };
    for (int v1 = 0; v1 < 5; v1++) {
        for (int v2 = 0; v2 < 4; v2++) {
            if (v2 == 3) Student[v1][v2] = 0;
            else Student[v1][v2] = student[v1][v2];
        }
    }
    
    stuAve(Student);
    print(Student);
    cout << "Average:";
    print(courseAve(Student));
    
    return 0;
}
