#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

class	Awesome
		{
	int _n;
		public:
			Awesome(void): _n(0) {}
			Awesome(int n): _n(n) {}
			Awesome & operator=(Awesome &a) {_n = a._n; return *this;}
			bool    operator==(Awesome const & rhs) const {return this->_n == rhs._n;}
			bool    operator!=(Awesome const & rhs) const {return this->_n != rhs._n;}
			bool    operator>(Awesome const & rhs) const {return this->_n > rhs._n;}
			bool    operator<(Awesome const & rhs) const {return this->_n < rhs._n;}
			bool    operator>=(Awesome const & rhs) const {return this->_n >= rhs._n;}
			bool    operator<=(Awesome const & rhs) const {return this->_n <= rhs._n;}
			int get_n() const {return _n;}
		};

std::ostream & operator<<(std::ostream &o, const Awesome &a) {o << a.get_n(); return o;}

template <typename type>
void iter(type *arr, int length, void(*func_ptr)(type))
{
	if(length < 0)
		std::cout << "Incorrect index\n";
	for(int i = 0; i < length; i++)
		func_ptr(arr[i]);
}

template <typename type>
void print(type a)
{
	std::cout << a << std::endl;
}

#endif