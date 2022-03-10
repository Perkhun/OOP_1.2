#include "Vector.h"
#include <iostream>

using namespace std;

float Vector::getVecElem(int index)
{
	if (index < 0 || index > size - 1)
		state = 1;

	return vec[index];
}

void Vector::setSize(int size)
{
	this->size = size;
}

void Vector::setState(int state)
{
	this->state = state;
}

void Vector::setVecElem(int index, float value)
{
	if (index < 0 || index> size - 1)
		state = 1;
	else
		vec[index] = value;
}

void Vector::Init()
{
	state = check_memory();
	size = 1;
	vec = new float(0);
}
void Vector::Init(int size)
{
	state = check_memory();
	this->size = size;

	vec = new float[size];
	for (size_t i = 0; i < size; i++)
		vec[i] = i;	
}
void Vector::Init(int size, float value)
{
	state = check_memory();
	this->size = size;

	vec = new float[size];
	for (size_t i = 0; i < size; i++)
		vec[i] = value;
}
void Vector::Display() const
{
	cout << "state: " << state << endl;
	cout << "size: " << size << endl;
	cout << "min = " << min() << " max = " << max() << endl;	
	for (size_t i = 0; i < size; i++)
		cout << "elem[" << i << "]: " << vec[i] << endl;

	
}
void Vector::Read()
{
	int SIZE;
	do {
		cout << "Enter size: ";
		cin >> SIZE;
	} while (!(SIZE > 0));
	Init(SIZE);
}
float Vector::max() const
{
	float m = vec[0];
	for (size_t i = 1; i < size; i++)
	{
		if (vec[i] > m)
			m = vec[i];
	}
	return m;
}
float Vector::min() const
{
	float m = vec[0];
	for (size_t i = 1; i < size; i++)
	{
		if (vec[i] < m)
			m = vec[i];
	}
	return m;
}
void Vector::SortHight() 
{
	for (int i = 1; i < size; i++)
	{
		for (int j = 0; j < size - i; j++)
			if (vec[j] > vec[j + 1])
			{
				int tmp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = tmp;				
			}
	}
}
void Vector::SortLow()
{
	for (int i = 1; i < size; i++)
	{
		for (int j = 0; j < size - i; j++)
			if (vec[j] < vec[j + 1])
			{
				int tmp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = tmp;				
			}
	}
}
void Vector::Free()
{
	delete[] vec;
}


