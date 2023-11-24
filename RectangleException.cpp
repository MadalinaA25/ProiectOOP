#include "RectangleException.h"

const char* RectangleException::what() const noexcept {
	return "Rectangle exception: nvalid width or height occurred";
}