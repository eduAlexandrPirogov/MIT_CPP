#pragma once
#include <string>
#include <iostream>

class Vehicle {
   public:
      std::string model;
      int year;
      Vehicle(int _year, std::string _model): year(_year), model(_model) {};
      void getModel();
      void getYear();
      virtual void getInfo();
};
