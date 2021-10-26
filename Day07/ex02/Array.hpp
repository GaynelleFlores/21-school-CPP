#ifndef ARRAY_HPP
#define ARRAY_HPP

template <class T>
class Array {
private:
	int len;
	T *array;
public:
	Array()
	{
		this->len = 0;
		this->array = nullptr;
	}
	Array(unsigned int n)
	{
	//	T *temp = new T();
		this->len = n;
		if (n == 0)
		{
			this->array = nullptr;
			return ;
		}
		this->array = new T[n];
		for(int i = 0; i < len; i++)
			this->array[i] = T();
		//delete temp;
	}
	Array(const Array &other)
	{
		if (other.array == nullptr)
		{
			this->array = nullptr;
			this->len = 0;
			return ;
		}
		this->len = other.len;
		this->array = new T[this->len];
		for(int i = 0; i < other.len; i++)
			this->array[i] = other.array[i];
	}
	Array& operator=(const Array &other)
	{
		if (other.array == nullptr)
		{
			this->array = nullptr;
			this->len = 0;
			return(*this);
		}
		if (this->array != nullptr)
			delete [] this->array;
		this->len = other.len;
		this->array = new T[this->len];
		for(int i = 0; i < other.len; i++)
			this->array[i] = other.array[i];
		return(*this);
	}
	T& operator[] (const int index)
	{
		if (index >= len || index < 0 || array == nullptr)
			throw std::exception();
		else
			return this->array[index];
	}
	~Array()
	{
		if (this->array != nullptr)
			delete [] this->array;
	}
	int size(void) const
	{
		return(this->len);
	}
};



#endif