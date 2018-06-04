#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
class Date{
public:
    Date(int day, int month, int year);
    Date();
    void setMonth(int monthSetter);
    void setYear(int year);
    void setDay(int daySetter);
    void printDate();
    int getMonth();
    int getDay();
    int getYear();

private:
    int day;
    int month;
    int year;
};


#endif // DATE_H_INCLUDED
