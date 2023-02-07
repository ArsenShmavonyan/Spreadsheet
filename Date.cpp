#include <iostream>
#include "Date.h"
#include <exception>

Date::Date() = default;
Date::Date(int day, int month, int year)
{
	if (day < 0 || month < 0 || year < 0)
	{
		std::logic_error("put bigger num");
	}
	else {
		m_day = day;
		m_month = month;
		m_year = year;
	}
}
Date& Date::operator=(const Date& oth)
{
	this->m_day = oth.m_day;
	this->m_month = oth.m_month;
	this->m_year = oth.m_year;
	return *this;
}
