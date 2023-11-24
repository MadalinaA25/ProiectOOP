#include "SquareException.h"

const char* SquareException::what() const noexcept {
	return "Square exception: invalid length occurred";
}