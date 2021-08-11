#ifndef SCHOOL_STUDENT
#define SCHOOL_STUDENT
#include <string>

class SchoolStudent
{
   public:
      void Assign();
      void Output();
      float getPercent();
      float getAvg();
   private:
      long studentID;
      std::string studentName;
      float average;
      double grades[8];
   double CalculateAvg();
};

#endif
