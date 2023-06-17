#ifndef _CLASS_HOUR_HPP_
#define _CLASS_HOUR_HPP_

#include "utils.hpp"

#define MAX_TIME_LENGTH 6

class Hour {
    private:
        uint16_t m_hour;
        uint16_t m_minutes;
    public:
        Hour();
        Hour(const Hour& original);
        ~Hour();

        void setTime();
        uint16_t getHour() const { return this->m_hour; }
        uint16_t getMinutes() const { return this->m_minutes; }
        Hour getTime() const { return (*this); }
        // Pre-increase overload operator
        Hour& operator++(); 
        // Pos-increase overload operator
        Hour operator++(int foo); 

        friend bool splitTime(const char *strTime, Hour& time);
        friend ostream& operator<<(ostream& output, const Hour& time);
        friend istream& operator>>(istream& input, Hour& time);
};

#endif // _CLASS_HOUR_HPP_