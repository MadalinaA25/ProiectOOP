#pragma once
#include <stdexcept>

class RectangleException : public std::exception
{
public:
	const char* what() const noexcept override;
};
