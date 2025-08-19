#include "ChessBoard.h"

ChessBoard::ChessBoard()
{
	create();
}

ChessBoard::~ChessBoard()
{
	for (auto p : pieces)
		delete p;
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

void ChessBoard::addPiece(Piece *piece)
{
	pieces.push_back(piece);
	board[piece->getRow()][piece->getCol()] = piece->getSymblo();
}

bool ChessBoard::movePiece(Piece *piece, int newRow, int newCol, bool hasPiece)
{
	if (piece->canMove(newRow, newCol, hasPiece))
	{
		board[piece->getRow()][piece->getCol()] = '.';
		piece->setPosition(newRow, newCol);
		board[newRow][newCol] = piece->getSymblo();
		return true;
	}

	return false;
}

bool ChessBoard::isEmpty(int row, int col)
{
	return board[row][col] == '.';
}