#include <iostream>

struct data  //declare a datat type called 'data'
{
   float z;  //field of the sttucy data
   char type; // anouther field of the struct data
};

int main()
{
   data D1 = {20, 'P'}; // creating instance of data and initialize fields (z = 20, type = 'P');
   std::cout << D1.z++ << D1.type << std::endl; // access to a stuct's fields
   data D2; // creating another instance of data;
   D2.type = D1.type; // type of D2 equals D1.type
   D2.z = 4 * D1.z;
   std::cout << ++D2.z << D2.type << std::endl; // access to a D2's fields
   std::cout << D1.z-- << D1.type << std::endl; 
   return 0;
};
