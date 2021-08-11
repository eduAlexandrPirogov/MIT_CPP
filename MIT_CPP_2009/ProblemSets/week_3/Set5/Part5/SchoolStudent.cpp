#include "SchoolStudent.h"
#include <iostream>

using namespace std;

void SchoolStudent::Assign()
{
   cout << "Input please StudentId: ";
   cin >> studentID;
   cout << "Input please name: ";
   cin >> studentName;
   for(int i = 0; i < 8; i++)
   {
      cout << "Input please grades: " << endl;
      cin >> grades[i];
   }
   average = CalculateAvg();
};

void SchoolStudent::Output()
{
   for(int i = 0; i < 8; i++)
      cout << "grades[ " << i << "]= " << grades[i] << " " << endl;
   cout << "Average = " << average << endl; 
};

double SchoolStudent::CalculateAvg()
{
   double sum = 0.0;
   for(int i = 0; i < 8; i++)
   {
      sum += grades[i];
   }
   return sum/8;
};

float SchoolStudent::getPercent()
{
   return 0;
}

float SchoolStudent::getAvg()
{
   return average;
}
