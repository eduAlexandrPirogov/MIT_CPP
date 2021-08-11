#include <iostream>
#include "SchoolStudent.h"

using namespace std;

void sort(SchoolStudent student[], const int n);

int main()
{
   int count = 0;
   cout << "Write a number of students you want to create: " << endl;
   cin >> count;
   SchoolStudent student[count];
   for(int i = 0; i < count; i++)
   {
      student[i].Assign();
   }
   
   sort(student, count);
   for(int i = 0; i < count; i++)
   {
      student[i].Output();
   }
   return 0;
};


void sort(SchoolStudent student[], const int n)
{
   for(int i = 0; i < n; i++)
   {
      for(int j = i; j < n-1; j++)
      {
         if(student[j].getAvg() < student[j+1].getAvg())
         {
              SchoolStudent tmp = student[j];
              student[j] = student[j+1];
              student[j+1] = tmp;
         }
      }
   }
};
