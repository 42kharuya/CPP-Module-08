#ifndef _EASYFIND_H_
#define _EASYFIND_H_

#include <vector>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int num) {
	typename T::iterator it = std::find(container.begin(), container.end(), num);
	return it;
}

template <typename T>
typename T::const_iterator easyfind(const T &container, int num) {
	typename T::const_iterator it = std::find(container.begin(), container.end(), num);
	return it;
}

#endif // _EASYFIND_H_
