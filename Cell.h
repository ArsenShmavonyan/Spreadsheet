#ifndef Cell_h
#define Cell_h

#include <iostream>
#include "Date.h"

enum class Color { RED, GREEN, BLUE };

class Cell
{
public:
	Cell();	
	Cell(const std::string&);
public:
	void set_value(const std::string&);
	std::string get_value();
	int to_int();
	double to_double();
	void reset();
public:
	Cell& operator=(const Cell&); 
private:
	std::string m_value;
	Color m_color;
};
#endif // Cell_h
