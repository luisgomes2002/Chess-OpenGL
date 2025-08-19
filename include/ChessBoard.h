#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <iostream>
#include <vector>
#include "Piece.h"

class ChessBoard
{

private:
	static const int SIZE = 8;
	std::vector<Piece *> pieces;
	char board[SIZE][SIZE];

	void create();

public:
	ChessBoard();
	~ChessBoard();

	void print();
	void addPiece(Piece *piece);
	bool movePiece(Piece *piece, int newRow, int newCol, bool hasPiece);
	bool isEmpty(int row, int col);
};

#endif