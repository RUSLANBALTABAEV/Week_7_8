﻿// Week_7_8_Task_1_Listing_13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>   // Заголовочный файл с классами, функциями и переменными для организации ввода-вывода
#include <clocale>    // Заголовочный файл стандартной библиотеке C как <locale.h>
#include <conio.h>    // Заголовочный файл, консольный ввод-вывод
#include <cmath>      // Заголовочный файл, для вычисления математической функций

using namespace std;  // использование пространство имён

int main()            // объявлеие функций
{
	setlocale(LC_ALL, "Russian");
	int r1, r2, n, x, y, v = 0, d1, d2, k = 1, i = 1;

	cout << "Введите количество точек: "; cin >> n;
	cout << "Введите внутренний радиус: "; cin >> r1;
	cout << "Введите внешний радиус: "; cin >> r2;
	cout << "Введите точку x и y через пробел: "; cin >> x >> y;
	d1 = r1 * 2;
	d2 = r2 * 2;

	if (d2 > 1) for (i; i <= n; i++) k++; if (x <= d2 && x >= d1 && y <= d2 && y >= d1) v++;
	else cout << "Внутренний радиус не может быть больше внешнего и не может быть равен ему. ";

	cout << v << " точек попадают в кольцо";

	_getch();
	return 0;
}