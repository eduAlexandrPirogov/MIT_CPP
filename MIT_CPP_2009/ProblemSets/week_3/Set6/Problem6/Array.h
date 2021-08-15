#ifndef arr_h
#define arr_h
#include <string>

class myArray
{
   public:
      myArray(const int init_size);
      myArray(int init_number[], const int size);
      myArray(myArray& array, const int size);
      ~myArray();
      int getLength();
      int &getElement(int index);
      const int &getElement(int index) const;
      void  print(std::string separator);
   private:
      int size;
      int* ptr;
};

#endif
