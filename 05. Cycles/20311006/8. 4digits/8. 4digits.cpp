﻿#include <iostream>
using namespace std;
int main()
{
	// Обхождане на всички четирицифрени
	for (int i = 1000; i <= 9999; i++)
	{
		// Отцепване на цифрите на числото
		int a = (i / 1000) % 10;
		int b = (i / 100) % 10;
		int c = (i / 10) % 10;
		int d = (i / 1) % 10;

		if (a + b == c + d) cout << i << " ";
	}
	return 0;
}
