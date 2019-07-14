#pragma once
#include "piece.hpp"

class Board;

class Rook : public Piece {
public:
	Rook(int x, int y, enums::PlayerType type);
	~Rook();
	void render();
	void checkValidMoves(Board* board);
};

