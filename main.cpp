#include "IntegerArray.h"

int main()
{
    const int size = 5;

    try
    {
        IntegerArray a(-1);
    }
    catch (const char* exception)
    {
        cout << "Error: " << exception << endl;
    }

    IntegerArray array[size] = { 2, 4 ,6 ,3 , 5};

    try
    {
       IntegerArray g(size);
       g.getElement(9);
    }
    catch (const char* exception)
    {
        
        cout << "Error: " << exception << endl;
    }
    try
    {
        IntegerArray r(size);
        r.removeElement(8);
    }
    catch (const char* exception)
    {
        cout << "Error: " << exception << endl;
    }
    try {
        IntegerArray cs(size);
        cs.changeSize(-1);
    }
    catch (const char* exception)
    {
        cout << "Error: " << exception << endl;
    }

    try {
        IntegerArray se(size);
        se.setElement(9, 7);
    }
    catch (const char* exception)
    {
        cout << "Error: " << exception << endl;
    }

    return 0;
}