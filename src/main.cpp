#include <cstdlib>
#include <cctype>

#include "ChessBoard.h"
#include "Knight.h"
#include "Rook.h"
#include "Pawn.h"

int main()
{
	ChessBoard board;

	Knight *Lknight = new Knight(7, 1);
	board.addPiece(Lknight);

	Rook *Lrook = new Rook(7, 0);
	board.addPiece(Lrook);

	Knight *Rknight = new Knight(7, 6);
	board.addPiece(Rknight);

	Rook *Rrook = new Rook(7, 7);
	board.addPiece(Rrook);

	Pawn *pawn1 = new Pawn(6, 0);
	board.addPiece(pawn1);
	Pawn *pawn2 = new Pawn(6, 1);
	board.addPiece(pawn2);
	Pawn *pawn3 = new Pawn(6, 2);
	board.addPiece(pawn3);
	Pawn *pawn4 = new Pawn(6, 3);
	board.addPiece(pawn4);
	Pawn *pawn5 = new Pawn(6, 4);
	board.addPiece(pawn5);
	Pawn *pawn6 = new Pawn(6, 5);
	board.addPiece(pawn6);
	Pawn *pawn7 = new Pawn(6, 6);
	board.addPiece(pawn7);
	Pawn *pawn8 = new Pawn(6, 7);
	board.addPiece(pawn8);

	int option = 0;

	while (option != 3)
	{
		std::cout << "\n=== MENU XADREZ ===\n";
		std::cout << "1. Mostrar tabuleiro\n";
		std::cout << "2. Mover peca\n";
		std::cout << "3. Sair\n";
		std::cout << "Escolha uma opcao: ";
		std::cin >> option;

		if (option == 1)
		{
			board.print();
		}
		else if (option == 2)
		{
			int pieceType, newRow;
			char colChar;

			std::cout << "Escolha a peca (1 = Cavalo, 2 = Torre): ";
			std::cin >> pieceType;

			std::cout << "Nova linha (1-8): ";
			std::cin >> newRow;
			newRow = 8 - newRow;

			std::cout << "Nova coluna (a-h): ";
			std::cin >> colChar;
			colChar = toupper(colChar);
			int newCol = colChar - 'A';

			bool isEmpty = board.isEmpty(newRow, newCol);

			if (pieceType == 1)
			{
				if (board.movePiece(Lknight, newRow, newCol, isEmpty))
					board.print();
				else
					std::cout << "Movimento invalido!\n";
			}
			else if (pieceType == 2)
			{
				if (board.movePiece(Lrook, newRow, newCol, isEmpty))
					board.print();
				else
					std::cout << "Movimento invalido!\n";
			}
			else
			{
				std::cout << "Peca inválida!\n";
			}
		}
		else if (option == 3)
		{
			std::cout << "Saindo do jogo...\n";
		}
		else
		{
			std::cout << "Opcao invalida!\n";
		}
	}

	std::cin.get();
	return 0;
}