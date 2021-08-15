#include "Array.h"
#include <string>
#include <iostream>

using namespace std;

myArray::myArray(const int init_size)
{
   size = init_size;
   ptr = new int[size];
};

myArray::myArray(int init_number[],const int init_size)
{
   size = init_size;
   ptr = new int[size];
   for(int i = 0; i < size; i++)
   {
      cout << ptr[i] << endl;
      this->ptr[i] = init_number[i];
   }
};

myArray::myArray(myArray& array, const int size)
{
   this->size = size;
   ptr = new int[size];
   for(int i = 0; i < size; i++)
      ptr[i] = array.getElement(i);
};

myArray::~myArray()
{
   delete[] ptr;
};

int myArray::getLength()
{
 return size;
};

int &myArray::getElement(int index)
{
   return ptr[index]; 
};

const int &myArray::getElement(int index) const
{
   return ptr[index];
};

void myArray::print(string separator)
{
   for(int i = 0; i < size; i++)
   {
      cout << ptr[i] << separator;
   }
};
