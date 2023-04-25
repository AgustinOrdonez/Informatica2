//
// Created by dioswilson1 on 4/5/23.
//

#include <iostream>
#include "Date.h"

Date::Date(int day, int month, int year) {
    if (month > 0 && month < 13) {
        this->month = month;
        this->year = year;
        if (day > 0 && day <= getMonthDays()) {
            this->day = day;
        }
        else {
            this->day = 1;
            this->month = 1;
            this->year = 1;
        }
    }
    else {
        this->day = 1;
        this->month = 1;
        this->year = 1;
    }
}


Date::~Date() {

}

void Date::incrementDayByOne() {
    if (this->day == getMonthDays()) {
        this->day = 1;
        if (this->month == 12) {
            this->month = 1;
            this->year++;
        }
        else {
            this->month++;
        }
    }
    else {
        this->day++;
    }

}

bool Date::isLeapYear() {
    return (this->year % 4 == 0) && !(this->year % 100 == 0 && this->year % 400 != 0);
}

int Date::getMonthDays() {
    int days = 31;
    if (this->month < 8 && this->month % 2 == 0) {
        if (this->month == 2) {
            days = 28 + isLeapYear();
        }
        else {
            days = 30;
        }
    }
    else if (this->month >= 8 && this->month % 2 == 1) {
        days = 30;
    }
    return days;
}

std::ostream &operator<<(std::ostream &o, const Date &date) {
    return o << "Day: " << date.day << " | Month: " << date.month << " | Year: " << date.year;
}
