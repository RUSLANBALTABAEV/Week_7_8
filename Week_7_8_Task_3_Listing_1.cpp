﻿// Week_7_8_Task_3_Listing_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>   // Заголовочный файл с классами, функциями и переменными для организации ввода-вывода
#include <clocale>    // Заголовочный файл стандартной библиотеке C как <locale.h>
#include <conio.h>    // Заголовочный файл, консольный ввод-вывод
#include <cmath>      // Заголовочный файл, для вычисления математической функций

using namespace std;  // использование пространство имён

int main()            // объявлеие функций
{
	setlocale(LC_ALL, "Russian");
	double q, m = 0.4, c = 100.0, l = 2258.0;
	int i;

	for (i = 1; i <= 11; i++) 
	{ 
		q = l * m; 
		l -= 28.0; 
		c += 10.0;
		cout << "Количество теплоты " << c << "C: " << q << endl;
	}

	_getch();
	return 0;
}