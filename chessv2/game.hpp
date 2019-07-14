#pragma once
#include "board.hpp"


class Game {

public:
	Game();
	~Game();
	void render();
private:
	Board* board;
};

