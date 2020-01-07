#include "pch.h"
#include "Vector.h"

Vector::Vector() {
	size = 0;
}

Vector::Vector(int size_) {
	size = size_;
	for (int i = 0; i < size; i++) {
		arr[i] = 0;
	}
}

Vector::~Vector() {
	delete[] arr;
}

int& Vector::operator[](int index) {
	return arr[index];
}

std::istream& operator>>(std::istream& in, Vector& vector) {
	in >> vector.size;
	int elem;
	for (int i = 0; i < vector.size; i++) {
		in >> elem;
		vector.arr[i] = elem;
	}
	return in;
}

std::ostream& operator<<(std::ostream& out, Vector& vector) {
	for (int i = 0; i < vector.size; i++) {
		out << vector.arr[i] << "  ";
	}
	out << std::endl;
	return out;
}

const Vector& operator+(const int num, Vector & other)
{
	for (int i = 0; i < other.size; i++) {
		other.arr[i] = other.arr[i] + num;
	}
	return other;
}

const Vector& operator+(Vector &other, const int num)
{
	for (int i = 0; i < other.size; i++) {
		other.arr[i] = other.arr[i] + num;
	}
	return other;
}
