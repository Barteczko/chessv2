#include "rook.hpp"
#include "board.hpp"

#include <iostream>


Rook::Rook(int x, int y, enums::PlayerType type) : Piece(x, y, type) {}


Rook::~Rook() {}

void Rook::render() {
	std::cout << "R ";
}

void Rook::checkValidMoves(Board* board) {
	int currentX, currentY;
for (int i = 0; i < ROOK_VECTORS.size(); i++) {
		currentX = coordinates.first + ROOK_VECTORS[i].first;
		currentY = coordinates.second + ROOK_VECTORS[i].second;
	}

}
