#include <iostream>
#include <string>

#include "Cell.h"
#include "Date.h"


Cell::Cell() = default;

void Cell::set_value(const std::string& value)
{
	m_value = value;
}
std::string Cell::get_value()
{
	return m_value;
}

Cell::Cell(const std::string& value)
{
//
	this -> set_value(value);
}

int Cell::to_int()
{
	return stoi(m_value);
}

double Cell::to_double()
{
	return stod(m_value);
}

void Cell::reset()
{
	m_value = " ";
}

