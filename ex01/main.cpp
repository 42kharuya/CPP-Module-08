#include "Span.hpp"
#include <iostream>

int main() {

	std::srand(std::time(NULL));
	{
		std::cout << "\n------------- N: 5 -------------" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span:" << sp.longestSpan() << std::endl;
	}

	{
		std::cout << "\n------------- N: 100 -------------" << std::endl;
		try {
			Span sp = Span(100);
			std::vector<int> nums;

			for (int i = 0; i < 100; ++i)
			{
				nums.push_back(rand());
			}

			sp.addNumberFill(nums.begin(), nums.end());

			std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}

	{
		std::cout << "\n------------- N: 10000 -------------" << std::endl;
		try {
			Span sp = Span(10000);
			std::vector<int> nums;

			for (int i = 0; i < 10000; ++i)
			{
				nums.push_back(rand());
			}

			sp.addNumberFill(nums.begin(), nums.end());

			std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}

	{
		std::cout << "\n------------- N: 20000 -------------" << std::endl;
		try {
			Span sp = Span(20000);
			std::vector<int> nums;

			for (int i = 0; i < 20000; ++i)
			{
				nums.push_back(rand());
			}

			sp.addNumberFill(nums.begin(), nums.end());

			std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}

	{
		std::cout << "\n------------- ERROR -------------" << std::endl;
		try {
			Span sp = Span(10);
			std::vector<int> nums;

			for (int i = 0; i < 30; ++i)
			{
				nums.push_back(rand());
			}

			sp.addNumberFill(nums.begin(), nums.end());

			std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}

		try {
			Span sp = Span(2);
			sp.addNumber(6);
			std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest Span:" << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}
}
