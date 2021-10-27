#ifndef EASYFIND_HPP
#define EASYFIND_HPP

template <typename T>
typename T::iterator easyfind (T &arr, int elem)
{
	typename T::iterator i;
	i = std::find(arr.begin(), arr.end(), elem);
	if (i == arr.end())
	{
		throw std::out_of_range("EasyFind didn't find element in container.");
	}
	std::cout << "result1: " << (*i) << "\n";
	return (i);
}

#endif