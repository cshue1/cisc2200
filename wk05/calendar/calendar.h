/* CHRISTINE SHUE
   DUE: FEBRUARY 17, 2017
   PURPOSE: This interface calendar.h creates a class Calendar to
   store the month, day, year, and day of the week.*/
#ifndef CALENDAR_H
#define CALENDAR_H

class Calendar
{
    public:
        Calendar();
        Calendar(int,int,int,int);
        void setDate(int,int,int,int);
        void advanceDate();
        void newMonth();
        void displayDate();
        string monthName();
        string dayOfWeekName();
        void displayMonth();
    private:
        int month,day,year,dayOfWeek;
        static const int daysInMonth[12];
};

#endif
