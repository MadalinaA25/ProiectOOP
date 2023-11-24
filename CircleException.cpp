#include "CircleException.h"

const char* CircleException::what() const noexcept
{
	return "Circle radius is invalid";
}