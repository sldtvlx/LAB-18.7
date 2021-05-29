#include "Vector.h"
#include <iostream>
using namespace std;

Vector::Vector(int s)
{
	size = s;
	min = new int[size];
	sec = new int[size];
	cout << "Введите элементы множества в формате 'mm ss': " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> min[i] >> sec[i];
		while (min[i] > 60 || sec[i] > 60)
		{
			cout << "Некорректный ввод!" << endl;
			cin >> min[i] >> sec[i];
		}
	}
	
	for (int i = 0; i < size; i++)
	{
		cout << "\n" << i + 1 << ". " << min[i] << ":" << sec[i];
	}
}

int Vector::dostup_po_index(int index)
{
	if (index > size) 
		cout << "Ошибка ввода";
	else
		cout << "Искомый эллемент: " << min[index - 1] << ":" << sec[index - 1];
	
	return 0;
}

int Vector::sum(int first, int second)
{
	int cel, drob;
	
	if (sec[first - 1] + sec[second - 1] >= 60)
	{
		cel = (sec[first - 1] + sec[second - 1]) / 60;
		drob = (sec[first - 1] + sec[second -1]) - 60;
	}
	else
	{
		drob = sec[first - 1] + sec[second - 1];
		cel = 0;
	}
	cout << "Сумма " << first << " элемента и " << second << " элемента = " << min[first - 1] + min[second - 1] + cel << ":" << drob;
	
	return 0;
}

int Vector::cons(int c)
{
	cout << "\nИзменённое множество: ";
	int cel, drob;
	for (int i = 0; i < size; i++)
	{
		if (sec[i] + c >= 60)
		{
			min[i] += (sec[i] + c) / 60;
			sec[i] = (sec[i] + c) - 60;
		}
		else sec[i] += + c;

		cout << "\n" << i + 1 << ". " << min[i] << ":" << sec[i];
	}
	return 0;
}