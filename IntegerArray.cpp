#include "IntegerArray.h"

IntegerArray::IntegerArray(int length) : _length(length)
{

    if (length > 0)
    {
        _data = new int[length];
    }
	else
		throw "bad_length!";

}

IntegerArray::~IntegerArray()
{
	delete[] _data;
}

void IntegerArray::getElement(int index) const
{
    if (index >= 0 && index < _length)
        cout << _data[index];
	else
		throw "bad_range!";
}

int IntegerArray::getLength() const
{
    return _length;
}

void IntegerArray::changeSize(int newLength)
{
    if (newLength == _length)
        return;

    else if (newLength <= 0)
    {
        throw "bad_length!";
    }

    int* data{ new int[newLength] };

    if (_length > 0)
    {
        int elementsToCopy{(newLength > _length) ? _length : newLength};
        for (int index = 0; index < elementsToCopy; ++index)
            data[index] = _data[index];
    }
    delete[] _data;
    _data = data;
    _length = newLength;
}

int IntegerArray:: setElement(int newData, int index)
{
    if (index >= 0 && index < _length)
    {
        newData = _data[index];
        return _data[index];
    }
    else
        throw "bad_range!";
}

IntegerArray::IntegerArray(const IntegerArray& copy)
{
    copy.getLength();
    for (int index = 0; index < _length; ++index)
        _data[index] = copy._data[index];
}

IntegerArray& IntegerArray:: clone(const IntegerArray& copy)
{
    if (&copy == this)
        return *this;
    else
        throw "copy error!";

    copy.getLength();

    for (int index = 0; index < _length; ++index)
        _data[index] = copy._data[index];

    return *this;
}

int IntegerArray::removeElement(int index)
{
    if (index >= 0 && index < _length)
    {
        _data[index] = 0;
        cout << "The element with index " << index << " has been removed" << endl;
        return _data[index];
    }
    else
        throw "bad_range!";
}
