﻿// lab4.6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S;
	int i, k; // n замінив на i, добавив k
	P = 1;
	i = 1;
	while (i <= 15)
	{
		S = 0;
		k = 1;
		while (k <= i)
		{
			S += 1/k;
			k++;
		}
		P *= (pow(sin(i),2) + pow(cos(S),2)) / pow(i ,2);
		i++;
	}
	cout << P << endl;
	P = 1;
	i = 1;
	do
	{
		S = 0;
		k = 1;
		do
		{
			S += 1 / k; // S
			k++;
		} while (k <= i);
		P *= (pow(sin(i), 2) + pow(cos(S), 2)) / pow(i, 2); // Рівняння
		i++;
	} while (i <= 15);
	cout << P << endl;
	P = 1;
	for (i = 1; i <= 10; i++)
	{
		S = 0;
		for (k = 1; k <= i; k++)
		{
			S += 1 / k;
		}
		P *= (pow(sin(i), 2) + pow(cos(S), 2)) / pow(i, 2);
	}
	cout << P << endl;
	P = 1;
	for (i = 15; k >= 1; i--)

	{
		S = 0;
		for (k = i; k >= 1; k--)

		{
			S += 1 / k;
		}
		P *= (pow(sin(i), 2) + pow(cos(S), 2)) / pow(i, 2);
	}
	cout << P << endl;
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
