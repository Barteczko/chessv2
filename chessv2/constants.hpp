#pragma once

static const int SIZE = 8;

static const std::vector<std::pair<int, int>> ROOK_VECTORS = { {1, 0}, {0, 1}, {-1, 0}, {0, -1} };


namespace enums {
	enum class PlayerType {
		WHITE,
		BLACK
	};
};