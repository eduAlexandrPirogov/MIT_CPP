#include "Vehicle.h"
#include <string>

class SmallCar : public Vehicle {
   public:
      std::string owner;
      SmallCar(int year, std::string model, std::string owner)
                   :Vehicle(year, model), owner(owner) {} ;
      void getInfo();
};
