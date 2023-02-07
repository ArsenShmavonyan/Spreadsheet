#include <iostream>
#include <exception>

#include "Cell.h"

void test_of_cell()
{
	Cell obj;
	obj.set_value("77");
	if (obj.to_int() == 77)
	{
		std::cout << "set_value passed:\n";
		std::cout << "to_int passed:\n";
	}
	else {
		std::logic_error("error");
	}
}
	 
int main ()
{
	test_of_cell();
}
