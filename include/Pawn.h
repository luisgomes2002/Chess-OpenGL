#ifndef PAWN_H
#define PAWN_H

#include "Piece.h"

class Pawn : public Piece
{
public:
	Pawn(int r, int c) : Piece('P', r, c) {}

	bool canMove(int newRow, int newCol, bool isEmpty) override
	{
		if (isEmpty)
		{
				}

		std::cout << "\nMovimento invalido para a peao \n";
		return false;
	}
};

#endif