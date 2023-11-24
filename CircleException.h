#pragma once
#include <stdexcept>

class CircleException : public std::exception {
public:
	const char* what() const noexcept override;
};
