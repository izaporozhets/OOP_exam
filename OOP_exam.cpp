// OOP_exam.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "Vector.h"
const int D1 = 5;
const int D2 = -5;
const int NEW_VALUE = 8;
const int INDEX = 3;

int main()
{
	Vector vector;

	std::cin >> vector;
	vector = vector + D1;
	std::cout << vector;
	vector = D2 + vector;
	std::cout << vector;
	vector[INDEX] = NEW_VALUE;
	std::cout << vector;

	system("pause");
}
