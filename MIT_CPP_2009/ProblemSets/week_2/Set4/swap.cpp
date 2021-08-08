#include <iostream>
#include <cstring>

using namespace std;

void swap(char* a, char* b);
void reverseString(char* a);

int main()
{
  // char* test = "abcdefg";
   char a = 'a';
   char b = 'b';
   char* ptr_a = &a;
   char* ptr_b = &b;
   swap(a, b);
   cout << "a: " << *ptr_a << " b: " << *ptr_b << endl;
   char str[] = "testing";
   reverseString(str);
   for(int i = 0; i < strlen(str); i++)
   {
      cout << str[i] ;  
 } 
   cout << endl;
  return 0;
}

void swap(char* a, char* b)
{
   char c = *a;
   *a = *b;
   *b = c;
}

void reverseString(char* a)
{
   int len = strlen(a);
   for(int i = 0; i < len/2; i++)
   { 
      swap(a[i], a[len-i-1]);
   }
}
