#ifndef WHATEVER_HPP
#define WHATEVER_HPP

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
void swap(type &a, type &b)
{
	type temp = a;
	a = b;
	b = temp;
}

template <typename type>
type min (type a, type b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename type>
type max (type a, type b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif