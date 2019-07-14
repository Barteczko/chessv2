#include "board.hpp"

#include <iostream>
#include "rook.cpp"


class Rook;

Board::Board() {

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			pieces[j * SIZE + i] = nullptr;
		}
	}
	pieces[5 * SIZE + 5] = new Rook(1, 1, enums::PlayerType::WHITE);
}


Board::~Board()
{
}

void Board::render() {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (pieces[i * SIZE + j] == nullptr)
				std::cout << "_ ";
			else
				pieces[i * SIZE + j]->render();
		}
		std::cout << "\n";
	}

	system("PAUSE");
}

void Board::update() {

}
