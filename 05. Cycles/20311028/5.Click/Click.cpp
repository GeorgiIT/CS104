// ���� "���"
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 100; i++)
    {
        // ����� ����� �� ����� �� 7
        if (i % 7 == 0) cout << "click ";

        // ����� ����� �������� 7
        else if (i / 10 == 7 || i % 10 == 7) cout << "click ";

        // ������ �������� �����
        else cout << i << " ";
    }
    return 0;
}