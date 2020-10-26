// Lab_04_2.cpp
// Колмикова Катерина Сергіївна
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 12
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = (2 + x) / x * x + 1; 
		if (x < 0)
			B = x * x * x - 2 * x * x * x * x;
		else
			if (x >= 0 && x <= 2)
				B = (abs(x) + exp(x)) * (abs(x) + exp(x)) * (abs(x) + exp(x));
			else
				B = 4 * cos(x * x - 2);
		y = A + B;
		cout << "|" << setw(7) << setprecision(3) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}