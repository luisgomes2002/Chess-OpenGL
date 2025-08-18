#ifndef KNIGHT_H
#define KNIGHT_H

#include "Piece.h"
#include <cmath>

class Knight : public Piece
{
public:
	Knight(int r, int c) : Piece('N', r, c) {}

	bool canMove(int newRow, int newCol) override
	{
		int dr = std::abs(newRow - row);
		int dc = std::abs(newCol - col);

		return (dr == 2 && dc == 1) || (dr == 1 & dc == 2);
	}
};

#endif