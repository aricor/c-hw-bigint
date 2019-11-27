
#include "aint.h"

aint::aint()
{
	this->sizeDeclared = 10;
	this->size = 0;
	this->ptr = new unsigned[10];
}

aint::aint(unsigned u)
{
	if (u == 0)
	{
		size = 0;
	}

	else
	{
		this->size = 1;
		ptr[0] = u;
	}

}

int aint::getSize() {
	return size; 
}
	int aint::getSizeDeclared() {
	return sizeDeclared;
}
aint::aint(const aint& other)
{

}


aint::~aint()
{
	delete[] ptr;
}

aint& aint::operator=(unsigned u)
{
	return *this;
}

bool aint::operator<(const aint & other) const
{
	return false;

}

bool aint::operator>(const aint & other) const
{
	return false;

}

bool aint::operator<=(const aint & other) const
{
	return false;

}

bool aint::operator>=(const aint & other) const
{
	return false;
}
bool aint::operator==(const aint & other) const
{
	return false;

}

bool aint::operator!=(const aint & other) const
{
	return false;
}

aint& aint::operator+=(const aint& other)
{
	return *this;
}

aint& aint::operator-=(const aint& other)
{
	return *this;
}

aint& aint::operator*=(const aint& other)
{
	return *this;
}

aint& aint::operator/=(const aint& other)
{
	return *this;
}

aint& aint::operator%=(const aint& other)
{
	return *this;
}

aint& aint::operator<<=(const size_t& val)
{
	return *this;
}

aint& aint::operator>>=(const size_t& val)
{
	return *this;
}

aint& aint::operator+(const aint& other)
{
	return *this;
}

aint& aint::operator-(const aint& other)
{
	return *this;
}

aint& aint::operator*(const aint& other)
{
	return *this;
}

aint& aint::operator/(const aint& other)
{
	return *this;
}

aint& aint::operator%(const aint& other)
{
	return *this;
}

aint& aint::operator<<(const size_t& val)
{
	return *this;
}

aint& aint::operator>>(const size_t& val)
{
	return *this;
}


bool aint::zero() const
{
	if (size == 0)	return true; 
	else 
	return false;
}

void aint::swap(aint &other)
{
	  
}

