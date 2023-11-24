#pragma once
#include <stdexcept>

class SquareException : public std::exception
{
public:
	const char* what() const noexcept override;
};
