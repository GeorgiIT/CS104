#include <iostream>
using namespace std;
int main()
{
    // ����������� �� ��� �������� ������ (�������)
    int A[3][3], B[3][3], C[3][3];

    // ��������� �� ���������� �� ��������� �
    cout << "Please enter first matrix elements:" << endl;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> A[x][y];
        }
    }

    // ��������� �� ���������� �� ��������� B
    cout << "Please enter second matrix elements:" << endl;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cin >> B[x][y];
        }
    }

    // ����������� �� ����
    cout << "Matrix Adamar Product: " << endl;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            C[x][y] = A[x][y] * B[x][y]; // ����������� ���������
            cout << C[x][y] << '\t'; // Tab
        }
        cout << '\n'; // cout << endl;
    }

    return 0;
}