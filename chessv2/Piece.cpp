#include "piece.hpp"



Piece::Piece(int x, int y, enums::PlayerType type) {
	coordinates = std::make_pair(x, y);
	this->type = type;
}



enums::PlayerType Piece::getType()
{
	return enums::PlayerType();
}


bool Piece::isValidMove(int x, int y) {
	for (int i = 0; i < validMoves.size(); i++) {
		if (validMoves[i] == std::make_pair(x, y))
			return true;
	}
	return false;
}
