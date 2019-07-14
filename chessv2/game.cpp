#include "game.hpp"


Game::Game() {
	board = new Board();
}


Game::~Game() {
	delete board;
}

void Game::render() {
	board->render();
}
