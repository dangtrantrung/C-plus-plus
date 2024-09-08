#include "Time.h"
Time::Time(int hour,int minute,int second):m_hour(hour),m_minute(minute),m_second(second)
{
}
bool Time::equalTime(Time const& b) const{
    return (m_hour==b.m_hour&&m_minute==b.m_minute&&m_second==b.m_second);
}
bool operator==(Time const& a, Time const& b){
    return a.equalTime(b);
}
