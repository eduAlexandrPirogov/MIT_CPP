#ifndef stock_h
#define stock_h
#include <ctime>

class StockPurchase
{
   public:
      StockPurchase(const double newPrice)
      {
         previousDefaultPrice = defaultPrice;
         currentPrice = newPrice;
         StockPurchase::defaultPrice = previousDefaultPrice + (currentPrice - previousDefaultPrice)/2.0;
         timeLastChecked = time(0);
      };

      static const double getDefaultPrice()
      {
         return StockPurchase::defaultPrice;
      };

      const double getCurrentPrice() const
      {
         return currentPrice;
      };
   private:
      double previousDefaultPrice, currentPrice;
      static double defaultPrice;
      time_t timeLastChecked;
};

#endif
