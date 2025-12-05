#include <iostream>
#include "easyfind.hpp"

int main() {

	{
		std::cout << "\n----------- Not Const -----------" << std::endl;
		std::vector<int> test;

		for (int i = 0; i < 100; ++i)
			test.push_back(i);

		{
			std::vector<int>::iterator it = ::easyfind(test, 99);
			if (it == test.end())
				std::cout << "Not Find" << std::endl;
			else {
				std::cout << "Iterator Value: " << *it << std::endl;
				std::cout << "Iterator Index: " << it - test.begin() << std::endl;
				std::cout << "Actual: " << test[it - test.begin()] << std::endl;
			}
		}

		test.pop_back();

		{
			std::vector<int>::iterator it = ::easyfind(test, 99);
			if (it == test.end())
				std::cout << "Not Found" << std::endl;
			else {
				std::cout << "Iterator Value: " << *it << std::endl;
				std::cout << "Iterator Index: " << it - test.begin() << std::endl;
				std::cout << "Actual: " << test[it - test.begin()] << std::endl;
			}
		}
	}

	{
		std::cout << "\n----------- Const -----------" << std::endl;
		std::vector<int> test;

		for (int i = 0; i < 100; ++i)
			test.push_back(i);

		const std::vector<int> testConst = static_cast< const std::vector<int> >(test);

		{
			std::vector<int>::const_iterator it = ::easyfind(testConst, 99);
			if (it == test.end())
				std::cout << "Not Find" << std::endl;
			else {
				std::cout << "Iterator Value: " << *it << std::endl;
				std::cout << "Iterator Index: " << it - testConst.begin() << std::endl;
				std::cout << "Actual: " << test[it - testConst.begin()] << std::endl;
			}
		}

		test.pop_back();

		{
			std::vector<int>::const_iterator it = ::easyfind(test, 99);
			if (it == test.end())
				std::cout << "Not Found" << std::endl;
			else {
				std::cout << "Iterator Value: " << *it << std::endl;
				std::cout << "Iterator Index: " << it - testConst.begin() << std::endl;
				std::cout << "Actual: " << test[it - testConst.begin()] << std::endl;
			}
		}
	}
}
