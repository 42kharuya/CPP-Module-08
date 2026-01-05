#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	// Stack(LIFO)
	// ------- Push Check -------
	// stack{5, 17} <-
	// top = 17
	// stack{5} ->
	// size = 1
	// stack{5,3,5,737,0} <-

	// ------- Iterator Check -------
	// begin <-(-) {5,3,5,737,0} ->(+) end
	{
		std::cout << "------- MutantStack -------" << std::endl;
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;

		mstack.pop();
		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	{
		std::cout << "------- list -------" << std::endl;
		std::list<int> s;

		s.push_back(5);
		s.push_back(17);
		std::cout << s.back() << std::endl;

		s.pop_back();
		std::cout << s.size() << std::endl;

		s.push_back(3);
		s.push_back(5);
		s.push_back(737);
		s.push_back(0);

		std::list<int>::iterator sIt = s.begin();
		std::list<int>::iterator sIte = s.end();
		++sIt;
		--sIt;
		while (sIt != sIte)
		{
			std::cout << *sIt << std::endl;
			++sIt;
		}
	}

	return 0;
}
