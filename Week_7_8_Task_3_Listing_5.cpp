﻿// Week_7_8_Task_3_Listing_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>   // Заголовочный файл с классами, функциями и переменными для организации ввода-вывода
#include <clocale>    // Заголовочный файл стандартной библиотеке C как <locale.h>
#include <conio.h>    // Заголовочный файл, консольный ввод-вывод
#include <cmath>      // Заголовочный файл, для вычисления математической функций

using namespace std;  // использование пространство имён

int main()            // объявлеие функций
{
	setlocale(LC_ALL, "Russian");
	double q, l = 2.3, m = 0.1;
	int i;

	for (i = 0; i <= 10; i++)
	{
		q = l * m;
		m += 0.1;
		cout << "Количество теплоты конденсации " << m << " кг воды: " << q << "* 10 ^ 6 Дж " << endl;
	}

	_getch();
	return 0;
}