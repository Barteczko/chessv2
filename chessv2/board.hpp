#pragma once
#include "piece.hpp"


class Board
{
public:
	Board();
	~Board();
	void render();
	void update();
private:
	Piece* pieces[64];

};

