#ifndef time_h
#define time_h
#include <ctime>

class Time
{
   public:
      Time(time_t _time);
      void setTime(time_t _time);
      time_t getTime();
   private:
      time_t time;
};

Time::Time(time_t _time): time(_time)
{

};

void Time::setTime(time_t _time)
{
   time = _time;
};

time_t Time::getTime()
{
   return time;
};
#endif
