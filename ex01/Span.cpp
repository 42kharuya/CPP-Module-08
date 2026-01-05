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

    std::vector<int> sorted = _span;
    std::sort(sorted.begin(), sorted.end());

    int shortest = std::numeric_limits<int>::max();
    for (std::vector<int>::iterator it = sorted.begin(); it + 1 != sorted.end(); ++it) {
        int diff = *(it + 1) - *it;
        if (diff < shortest)
            shortest = diff;
    }
    return shortest;
}

int Span::longestSpan() {
	if (_span.size() <= 1)
		throw std::runtime_error("Vector is 0 or 1.");

	std::vector<int>::iterator minIt = std::min_element(_span.begin(), _span.end());
    std::vector<int>::iterator maxIt = std::max_element(_span.begin(), _span.end());

    return *maxIt - *minIt;
}
