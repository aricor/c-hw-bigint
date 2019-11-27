#ifndef _AINT_H_
#define _AINT_H_

class aint
{
public:
	aint();
	aint(unsigned u);
	aint(const aint& other);
	~aint();

	
	aint& operator=(unsigned u);

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


	bool zero() const;
	void swap(aint &other);

private:
	long long size;
	unsigned* ptr;
	long long sizeDeclared; 
};

#endif