﻿// Week_7_8_Task_1_Listing_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>   // Заголовочный файл с классами, функциями и переменными для организации ввода-вывода
#include <clocale>    // Заголовочный файл стандартной библиотеке C как <locale.h>
#include <conio.h>    // Заголовочный файл, консольный ввод-вывод
#include <cmath>      // Заголовочный файл, для вычисления математической функций

using namespace std;  // использование пространство имён

int main()            // объявлеие функций
{
	setlocale(LC_ALL, "Russian");
	float f, k = 1.0, i;
	int n, v = 0;

	cout << "Введите членов ряда: "; cin >> n;
	for (i = 1; i < n; i++) { f = (k + 1) / sqrt(pow(k, 2) + 2); k++; }
	cout << "Сумма членов с общим k, равна: " << f;

	_getch();
	return 0;
}