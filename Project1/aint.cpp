
#include "aint.h"

aint::aint()
{
	int sizedeclared = 10; 
	int size = 0;
	unsigned (*ptr)[10];
}

aint::aint(unsigned u)
{
	if (u == 0)
	{
		size = 0;
	}
	//else
//	{
//		int i i; = 0;
//		while (i > 0)
//		{

	//	}

//	}
}

aint::aint(const aint& other)
{

}

aint::~aint()
{
	//delete[] size;
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
	return false;
}

void aint::swap(aint &other)
{
	  
}

