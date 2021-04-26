﻿#include <iostream>
using namespace std;
int main()
{
    // Деклариране на три двумерни масива (Матрици)
    int A[3][3], B[3][3], C[3][3];

    // Въвеждане на елементите на матрицата А
    cout << "Please enter first matrix elements:" << endl;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> A[x][y];
        }
    }

    // Въвеждане на елементите на матрицата B
    cout << "Please enter second matrix elements:" << endl;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> B[x][y];
        }
    }

    // Намиране на произведение на матриците
    cout << "Matrix Multiplication:" << endl;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            C[x][y] = A[x][0] * B[0][y] + A[x][1] * B[1][y] + A[x][2] * B[2][y];

            cout << C[x][y] << '\t'; // tab
        }
        cout << '\n'; // cout << endl;
    }

    return 0;
}