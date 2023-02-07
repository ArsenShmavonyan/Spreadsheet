#include <iostream>
#include <exception>

#include "Spreadsheet.h"
#include "Cell.h"

bool chek(int x, int y)
{
	if (x < 0 || y < 0)
	{
		return false;
	}
	return true;
}

Spreadsheet::Spreadsheet(int row, int col)
{
	if (chek(row, col))
	{	
		m_row = row;
		m_col = col;
		m_cells = new Cell*[row];
		for (int i = 0; i < row; ++i)
		{
			m_cells[i] = new Cell[col];
		}
	}
	else {
		std::logic_error("wrong nuber\n");
	}
}
Spreadsheet::~Spreadsheet()
{	
	for (int i = 0; i < m_row; ++i)
	{	
		delete[] m_cells[i];
	}
	delete[] m_cells;
}
void Spreadsheet::set_cell_at(int row, int col, const Cell& cel)
{
	if (chek(row, col))
	{
		m_cells[row][col] = cel;
	}
	else {
		std::logic_error("wrong number:");
	}
}
void Spreadsheet::set_cell_at(int row, int col, const std::string& str)
{
	if (chek(row, col)) 
	{
		m_cells[row][col].set_value(str);
	}
	else {
		std::logic_error("wrong number:");
	}
}
Cell Spreadsheet::get_cell_at(int row, int col)
{
	if (chek(row, col))
	{
		return m_cells[row][col];
	}
	else {
		std::logic_error("wrong number:");
	}
}

