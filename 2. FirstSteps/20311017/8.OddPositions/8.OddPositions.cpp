// 08. ���� �� ������� �� ������� ������� �� 5 ������� �����

#include<iostream>
using namespace std;
int main()
{

    int number;
    cout << "Enter a number : " << endl;
    cin >> number;

    int a1 = (number / 10000) % 10;
    int a2 = (number / 1000) % 10;
    int a3 = (number / 100) % 10;
    int a4 = (number / 10 ) % 10;
    int a5 = (number / 1) % 10;

    int sum = a1 + a3 + a5;
    cout << "The result : " << sum << endl;
    return 0;
}