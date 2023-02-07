#ifndef Date_h
#define Date_h

#include <iostream>

class Date
{
public:
	Date();
	Date(int, int, int);
public:
	Date& operator=(const Date&);
private:
	int m_day;
	int m_month;
	int m_year;
};

#endif // Date_H
