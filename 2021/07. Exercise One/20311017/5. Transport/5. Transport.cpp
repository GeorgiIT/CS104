#include <iostream>
using namespace std;
int main()
{
    // ���������� �� ���� ���� � �������� 1 � 2
    int a, b;

    // ��������� ���� ���� � ������� 2 ��������
    cout << "bus1=?, bus2=?" << endl;
    cin >> a >> b;

    // ���������������� �� ������ �� ��������
    int b3 = (a + b) / 3;
    int b1 = b3 - a;
    int b2 = b3 - b;

    // ��������� ������������������
    cout << "b1: " << b1 << "  b2: " << b2 << " b3: " << b3 << endl;

    return 0;
}