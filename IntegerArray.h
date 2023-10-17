#pragma once
#include <iostream>
using namespace std;

class IntegerArray
{
private:
	int _length;
	int* _data;
public:
	IntegerArray() = default;
	IntegerArray(int length);
	
	~IntegerArray();

	void getElement(int index) const;

	int getLength() const;

	void changeSize(int newLength);

	int setElement(int newData, int index);

	IntegerArray(const IntegerArray& copy);
   
	IntegerArray& clone(const IntegerArray& copy);

	int removeElement(int index);
};

