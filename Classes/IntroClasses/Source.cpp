#include "Vehicle.h"
#include "SmallCar.h"

int main(){
   Vehicle newVech(1999, "Volga");
   newVech.getModel();

   SmallCar smallCar(1999, "Small Car", "Alex");
   smallCar.getModel();

   Vehicle* v2 = &smallCar;
   v2->getInfo();
   return 0;
}
