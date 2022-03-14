#include <iostream>
#include <cmath>
using namespace std;

/// <summary>
/// ���� �� x^k
/// </summary>
/// <param name="x">�a������� X</param>
/// <param name="k">��������� K</param>
/// <returns>����</returns>
int f(int x = 1, int n = 1)
{
    int sum = 0;
    for (int k = 1; k <= n; k++)
    {
        sum = sum + pow(x, k);
    }
    return sum;
}

/// <summary>
/// ������ ������� �� ����������
/// </summary>
int main()
{
    int x, n;
    cout << "x=";
    cin >> x;
    cout << "n=";
    cin >> n;
    cout << "f=" << f(x, n) << endl;
    return 0;
}