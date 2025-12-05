#ifndef _SPAN_H_
#define _SPAN_H_

#include <vector>
#include <algorithm>
#include <cstdlib>
#include <limits>
#include <stdexcept>
#include <ctime>

class Span
{
	public:
	 Span(unsigned int N);
	 ~Span();
	 Span(const Span &other);
	 Span& operator=(const Span &other);

	 void addNumber(int num);
	 int shortestSpan();
	 int longestSpan();

	 template <typename Iterator>
	 void addNumberFill(Iterator begin, Iterator end) {
		for (Iterator it = begin; it != end; ++it) {
            addNumber(*it);
        }
	 }

	private:
	 std::vector<int> _span;
	 unsigned int _maxLen;
};

#endif // _SPAN_H_
