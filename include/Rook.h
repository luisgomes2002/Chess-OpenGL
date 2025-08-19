#ifndef ROOK_H
#define ROOK_H

#include "Piece.h"
#include <cmath>

class Rook : public Piece
{
public:
	Rook(int r, int c) : Piece('R', r, c) {}

	bool canMove(int newRow, int newCol, bool isEmpty) override
	{
		// Criar verificao de se tem uma peca no meio do caminho

		if (isEmpty)
		{
			std::cout << "\nJa existe uma peca nessa posicao\n";
			return false;
		}

		int dr = std::abs(newRow - row);
		int dc = std::abs(newCol - col);

		if ((dr == 0 && dc != 0) || (dr != 0 && dc == 0))
		{
			return true;
		}

		std::cout << "\nMovimento invalido para a torre\n";
		return false;
	}
};

#endif