#ifndef Spreadsheet_h	
#define Spreadsheet_h

#include <iostream>
#include "Cell.h"

class Spreadsheet
{
public:
	Spreadsheet(int, int);
	~Spreadsheet();
public:
	void set_cell_at(int, int, const Cell&);
	void set_cell_at(int, int, const std::string&);
	Cell get_cell_at(int, int);
/*	void add_row(int);
	void remove_row(int);
	void add_column(int);
	void remove_column(int);
	void swap_rows(int, int);
	void swap_colums(int, int);*/
private:
	Cell** m_cells;
	int m_row;
	int m_col;
};
#endif // Spreadsheet_h
