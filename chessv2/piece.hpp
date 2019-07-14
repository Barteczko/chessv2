#pragma once
#include <vector>

#include "constants.hpp"


class Piece
{
public:
	enums::PlayerType getType();


	virtual void checkValidMoves()=0;
	virtual void render() = 0;
	bool isValidMove(int x, int y);

protected:
	enums::PlayerType type;
	Piece(int x, int y, enums::PlayerType type);
	~Piece();
	Piece();
	std::vector<std::pair<int, int>> validMoves;

	std::pair<int, int> coordinates;

};

