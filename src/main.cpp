#include "ChessBoard.h"
#include "Knight.h"

int main()
{
	ChessBoard board;

	Knight *knight = new Knight(7, 1);
	board.addPiece(knight);

	board.print();

	// std::cout << "\nTentando mover cavalo para (5,2)...\n";
	// if (board.movePiece(knight, 5, 2))
	// {
	// 	board.print();
	// }
	// else
	// {
	// 	std::cout << "Movimento inválido!\n";
	// }

	return 0;
}