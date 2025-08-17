#include "ChessBoard.h"

ChessBoard::ChessBoard()
{
	create();
}

void ChessBoard::create()
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			board[i][j] = '.';
		}
	}
}

void ChessBoard::print()
{
	std::cout << "   a b c d e f g h\n";
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << 8 - i << "  ";
		for (int j = 0; j < SIZE; j++)
		{
			std::cout << board[i][j] << " ";
		}
		std::cout << " " << 8 - i << "\n";
	}
	std::cout << "   a b c d e f g h\n";
}
