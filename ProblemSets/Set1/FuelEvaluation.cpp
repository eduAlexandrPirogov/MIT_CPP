#include <iostream>

using namespace std;

int main()
{
   cout << "Input please the miles on the car's odometer at the start: \n";
   int start_miles = 0;
   cin >> start_miles;
  
   cout << "Input please the miles on the car's odometer at the end: \n";
   int end_miles = 0;
   cin >> end_miles;

   cout << "Input please fuel level at the start in gallons: \n";
   int start_fuel_level = 0;
   cin >> start_fuel_level;

   cout << "Input please fuel level at the end in gallons: \n";
   int end_fuel_level = 0;
   cin >> end_fuel_level;

   int wasted_gallons = start_fuel_level - end_fuel_level;
   int miles_wasted = end_miles - start_miles;
   double fuel_per_mile = miles_wasted/wasted_gallons;

   cout << "You traveled for " << miles_wasted << endl;
   cout << "Gallons per mile: " << fuel_per_mile << endl;
   return 0;
}
