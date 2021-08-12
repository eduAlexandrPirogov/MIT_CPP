#ifndef complex_h
#define complex_h
#include <iostream>

class Complex
{
   public:
      Complex();
      Complex(double _real, double _imaginary);
      Complex Add(Complex _complex);
      Complex Substract(Complex _complex);
      Complex Multiply(Complex _complex);
      double getReal();
      double getImaginary();
      void Output();
   private:
      double real;
      double imaginary;
};

Complex::Complex()
{
   real = 0;
   imaginary = 0;
};

Complex::Complex(double _real, double _imaginary)
{
    real = _real;
    imaginary = _imaginary;
};

Complex Complex::Add(Complex _complex)
{
   real = _complex.getReal();
   imaginary = _complex.getImaginary();
   Complex result{real, imaginary};
   return result;
};

Complex Complex::Substract(Complex _complex)
{
   real -= _complex.getReal();
   imaginary -= _complex.getImaginary();
   Complex result{real, imaginary};
   return result;
};

Complex Complex::Multiply(Complex _complex)
{
   real = real * _complex.getReal() - imaginary * _complex.getImaginary();
   imaginary = real * _complex.getImaginary() + imaginary * _complex.getReal();
   Complex result{real, imaginary};
   return result;
};

double Complex::getReal()
{
   return real;
};

double Complex::getImaginary()
{
   return imaginary;
};

void Complex::Output()
{
   char sign;
   imaginary >= 0 ? sign = '+' : sign = '-';
   std::cout << real << sign << imaginary << "i" << std::endl;
};
#endif
