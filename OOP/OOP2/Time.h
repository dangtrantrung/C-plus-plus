#ifndef DEF_TIME
#define DEF_TIME

class Time{
    public:
    Time(int hour=0,int minute=0,int second=0);
    bool equalTime(Time const& b) const;
    private:
    int m_hour;
    int m_minute;
    int m_second;
};

    //overriding operator
    bool operator==(Time const& a, Time const& b);

#endif
