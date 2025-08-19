#ifndef PIECE_H
#define PIECE_H

#include <iostream>

class Piece
{
protected:
	char symbol;
	int row, col;

public:
	Piece(char s, int r, int c) : symbol(s), row(r), col(c) {};
	virtual ~Piece() {};

	char getSymblo() const { return symbol; }
	int getRow() const { return row; }
	int getCol() const { return col; }

	void setPosition(int r, int c)
	{
		row = r;
		col = c;
	}

	virtual bool canMove(int newRow, int newCol, bool isEmpty) = 0;
};

#endif