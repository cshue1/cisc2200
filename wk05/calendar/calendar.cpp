/* CHRISTINE SHUE
   DUE: FEBRUARY 17, 2017
   PURPOSE: This implementation, calendar.cpp contains all of the
   member functions that are defined for class Calendar in calendar.h.*/
Calendar::Calendar()
{
    month = 1;
    day   = 1;
    year  = 2017;
    dayOfWeek = 0;
}

Calendar::Calendar(int m, int d, int y, int w)
{
    month     = m;
    day       = d;
    year      = y;
    dayOfWeek = w;
}

void Calendar::setDate(int m, int d, int y, int w)
{
    month     = m;
    day       = d;
    year      = y;
    dayOfWeek = w;
}

void Calendar::advanceDate()
{
    if (day >= daysInMonth[month-1])
        newMonth();
    else
        day++;
    if (dayOfWeek != 7)
	dayOfWeek++;
    else
	dayOfWeek = 1;
}

void Calendar::newMonth()
{
    if (month == 12)
    {
        year++;
        month = 1;
    }
    else
    {
        month++;
    }
    day = 1;
}

void Calendar::displayDate()
{
    cout << dayOfWeekName() << " : " << monthName() << " " << day << ", " << year << endl;
}

string Calendar::monthName()
{
    if (month == 1)
        return "JANUARY";
    else if (month == 2)
        return "FEBRUARY";
    else if (month == 3)
        return "MARCH";
    else if (month == 4)
        return "APRIL";
    else if (month == 5)
        return "MAY";
    else if (month == 6)
        return "JUNE";
    else if (month == 7)
        return "JULY";
    else if (month == 8)
        return "AUGUST";
    else if (month == 9)
        return "SEPTEMBER";
    else if (month == 10)
        return "OCTOBER";
    else if (month == 11)
        return "NOVEMBER";
    else
        return "DECEMBER";
}
string Calendar::dayOfWeekName()
{
    if (dayOfWeek == 1)
	return "SUNDAY";
    else if (dayOfWeek == 2)
	return "MONDAY";
    else if (dayOfWeek == 3)
	return "TUESDAY";
    else if (dayOfWeek == 4)
	return "WEDNESDAY";
    else if (dayOfWeek == 5)
	return "THURSDAY";
    else if (dayOfWeek == 6)
	return "FRIDAY";
    else
	return "SATURDAY";
}

void Calendar::displayMonth()
{
    int w = dayOfWeek;
    cout << "\tMonth: " << monthName() << endl;
    cout << " ----------------------------------------- " << endl;
    cout << "| SUN | MON | TUE | WED | THU | FRI | SAT |" << endl;
    cout << " ----------------------------------------- " << endl;
    for (int i = 1; i < w; i++)
    {
	cout << "|     ";
    }
    for (int i = 1; i <= daysInMonth[month-1]; i++)
    {
	if (i < 10)
	    cout << "|" << i<< "    ";
	else
	    cout << "|" << i << "   ";
	w++;
	if (w > 7)
	{
	    cout << "|" << endl;
	    for (int i = 0; i < 2; i++)
	        cout << "|     |     |     |     |     |     |     |" << endl;
	    cout << " ----------------------------------------- " << endl;
	    w = 1;
	}
    }
    if (w < 7)
	for (int i = w; w <= 7; w++)
        {
            cout << "|     ";
        }
    cout << "|" << endl;
    for (int i = 0; i < 2; i++)
	cout << "|     |     |     |     |     |     |     |" << endl;
    cout << " ----------------------------------------- " << endl; 

}

const int Calendar::daysInMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
