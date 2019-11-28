#ifndef _AINT_H_
#define _AINT_H_
#include <iostream>;
using namespace std; 
class aint
{
public:
	~aint(); //destructor
	aint(); // constructor
	aint(unsigned u); // copy constructor 1
	aint& operator=(unsigned u); // copy assignment 1
	
	aint(const aint& other); // copy constructor 2
	aint(aint& other); // move constructor
	aint& operator=(const aint& other); // copy assignment 2
	aint& operator=(aint&& other); // move assignment 

	bool operator<(const aint & other) const;
	bool operator>(const aint & other) const;
	bool operator<=(const aint & other) const;
	bool operator>=(const aint & other) const;
	bool operator==(const aint & other) const;
	bool operator!=(const aint & other) const;

	aint& operator+=(const aint& other); 
	aint& operator-=(const aint& other);
	aint& operator*=(const aint& other);
	aint& operator/=(const aint& other);
	aint& operator%=(const aint& other);
	aint& operator<<=(const size_t& val);
	aint& operator>>=(const size_t& val);

	aint& operator+(const aint& other);
	aint& operator-(const aint& other);
	aint& operator*(const aint& other);
	aint& operator/(const aint& other);
	aint& operator%(const aint& other);
	aint& operator<<(const size_t& val);
	aint& operator>>(const size_t& val);

	ostream& operator<<(ostream& os, const aint& out);
	istream& operator>>(istream& is, aint& in);
	bool zero() const;
	void swap(aint &other);
	long long getSize();
	long long getSizeDeclared();
private:
	long long size;
	unsigned* ptr;
	long long sizeDeclared; 
};

#endif