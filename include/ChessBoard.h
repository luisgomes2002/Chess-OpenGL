#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <iostream>

class ChessBoard
{

private:
	static const int SIZE = 8;
	char board[SIZE][SIZE];

	void create();

public:
	ChessBoard();
	void print();
};

#endif