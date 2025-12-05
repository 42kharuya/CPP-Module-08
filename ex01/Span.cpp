#include "Span.hpp"

Span::Span(unsigned int N) : _maxLen(N) {}

Span::~Span() {}

Span::Span(const Span &other)
	: _span(other._span), _maxLen(other._maxLen) {}

Span& Span::operator=(const Span &other) {
    if (this != &other) {
		_maxLen = other._maxLen;
		_span = other._span;
	}
    return *this;
}

void Span::addNumber(int num) {
	if (_span.size() == _maxLen)
		throw std::runtime_error("Vector is full.");
	_span.push_back(num);
}

int Span::shortestSpan() {
	if (_span.size() <= 1)
		throw std::runtime_error("Vector is 0 or 1.");

	int shortest = std::numeric_limits<int>::max();
	int currentSpan;
	std::vector<int>::iterator base = _span.begin();
	while (base + 1 != _span.end()) {
		std::vector<int>::iterator i = base + 1;
		while (i != _span.end()) {
			currentSpan = abs(*base - *i);
			if (currentSpan < shortest)
				shortest = currentSpan;
			i++;
		}
		base++;
	}
	return shortest;
}

int Span::longestSpan() {
	if (_span.size() <= 1)
		throw std::runtime_error("Vector is 0 or 1.");

	int longest = std::numeric_limits<int>::min();;
	int currentSpan;
	std::vector<int>::iterator base = _span.begin();
	while (base + 1 != _span.end()) {
		std::vector<int>::iterator i = base + 1;
		while (i != _span.end()) {
			currentSpan = abs(*base - *i);
			if (currentSpan > longest)
				longest = currentSpan;
			i++;
		}
		base++;
	}
	return longest;
}
