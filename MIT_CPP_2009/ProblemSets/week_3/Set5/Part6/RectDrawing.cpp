#include "RectDrawing.h"

using namespace std;

void RectDrawing::init()
{
   hasBeenInitialized();
   cout << "Input number of rectangles: ";
   int count;
   cin >> count;
   rectangle = new Rectangle[count];
   for(int i = 0; i < count; i++)
   {
      rectangle->init();
   }
};

void RectDrawing::hasBeenInitialized()
{
  delete[] rectangle;
}
