#ifndef INFORMATICA2_DATE_H
#define INFORMATICA2_DATE_H


class Date {
private:
    int day;
    int month;
    int year;
public:
    Date(int day, int month, int year);

    ~Date();

    void incrementDayByOne(); //Argument is this* implicitly
    void print();

    bool isLeapYear();

    int getMonthDays();

    friend std::ostream &operator<<(std::ostream &o, const Date &date);
};


#endif //INFORMATICA2_DATE_H
