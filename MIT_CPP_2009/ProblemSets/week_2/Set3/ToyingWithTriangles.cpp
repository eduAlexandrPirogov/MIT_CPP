#include <iostream>
#include <cmath>

using namespace std;

void triangle(double length_a, double length_b, double angle_omega, double& length_c, double& angle_alpha, double& angle_beta);

int main()
{

   double a = 2.5;
   double b = 3.4;
   double angle_omega = 0.234;
   double c = 0;
   double angle_alpha = 0;
   double angle_beta = 0;
   triangle(a, b, angle_omega, c, angle_alpha, angle_beta);
   cout << c;
   return 0;
}

void triangle(double length_a, double length_b, double angle_omega, double& length_c, double& angle_alpha, double& angle_beta)
{
   length_c = sqrt(length_a * length_a + length_b * length_b - 2 * length_a * length_b * cos(angle_omega));
   
}
