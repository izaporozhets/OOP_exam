#pragma once
#include <vector>
#include <iostream>

class Vector {
public:

	Vector();
	~Vector();
	Vector(int size_);
	int& operator[](int index);

private:

	int *arr = new int[size];
	int size;

	friend std::ostream& operator<<(std::ostream& out, Vector& vector);
	friend std::istream& operator>>(std::istream& in, Vector& vector);
	friend const Vector& operator +(const int num, Vector &other);
	friend const Vector& operator +(Vector &other, const int num);

};

std::istream& operator>>(std::istream& in, Vector& vector);
std::ostream& operator<<(std::ostream& out, Vector& vector);