﻿/*
	-3 варинт-

	Класс-контейнер ВЕКТОР с элементами типа int.
	Реализовать операции:
	[] – доступа по индексу
	+ вектор – сложение элементов векторов a[i]+b[i]
	+ число – добавляет константу ко всем элементам вектора

	Пользовательский класс Time для работы с временными интервалами.
	Интервал должен быть представлен в виде двух полей: минуты типа int и секунды типа int.
	При выводе минуты отделяются от секунд двоеточием.

*/

#include "Vector.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int s, con, in, menu = 4;
	cout << "Введите кол-во элементов множества: "; 
	cin >> s;
	Vector a(s);
	while (menu == 1 || menu == 2 || menu == 3 || menu == 4)
	{

		cout << endl << "- - - - - - - - - - - - - - - " << endl << "Меню: \n\t0. Выход \n\t1. Получить элемент по индексу \n\t2. Сложение двух элементов \n\t3. Увеличение всех элементов множество на заданую константу";
		cout << endl << "\nВыберите пункт меню : "; cin >> menu;
		
		if (menu == 1)
		{
			cout << "Введи индекс элемента, который хочешь получить: "; 
			cin >> in;
			
			a.dostup_po_index(in);
		}

		if (menu == 2)
		{
			int first, second;
			
			cout << "Введите индексы элементов, которые нужно сложить: ";
			cin >> first >> second;
			
			a.sum(first, second);
		}

		if (menu == 3)
		{
			cout << "Введите кол-во секунд: "; 
			cin >> con;
			
			a.cons(con);
		}

		if (menu == 0)
			cout << "Программа завершена";
	}
}