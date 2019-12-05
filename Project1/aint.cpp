#include "aint.hpp"
#include <cmath>

// constructor
aint::aint()
{
	this->sizeDeclared = 10;
	this->size = 0;
	this->ptr = new unsigned[10];
}
// copy constructor 1
aint::aint(unsigned u)
{
	size = 0;
	sizeDeclared = 10;
	ptr = new unsigned[10];

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

long long aint::getSize() {
	return size;
}

long long aint::getSizeDeclared() {
	return sizeDeclared;
}
// copy constructor 2
aint::aint(const aint& other)
{
	//size = other.size; 
	//sizeDeclared = other.sizeDeclared; 
	//ptr = other.ptr; 
	size = other.size;
	sizeDeclared = other.sizeDeclared;
	ptr = new unsigned[sizeDeclared];
	for (int i = 0; i < sizeDeclared; i++) {
		ptr[i] = other.ptr[i];
	}

}

//destructor
aint::~aint()
{
	delete[] ptr;
}
// copy assignment 1
aint& aint::operator=(unsigned u)
{
	size = 1;
	ptr[0] = u;
	return *this;
}
//copy assignment 2
aint& aint::operator=(const aint& other) {

	return *this = aint(other);
}

// move assignment 
aint& aint::operator=(aint&& other) {
	if (this != &other) {
		delete[]ptr;

		size = other.size;
		sizeDeclared = other.sizeDeclared;
		ptr = new unsigned[sizeDeclared];
		for (int i = 0; i < sizeDeclared; i++) {
			ptr[i] = other.ptr[i];
		}

	}
	return *this;
}

void aint::extendSizeDeclared(int sizeAfterExtend) {

	unsigned * new_ptr = new unsigned[sizeAfterExtend];
	for (long long j = 0; j < size; ++j)
	{
		new_ptr[j] = ptr[j];
	}
	sizeDeclared = sizeAfterExtend;
	delete[] ptr;
	ptr = new_ptr;
}

bool aint::operator<(const aint & other) const
{
	if (this->size < other.size)
		return true;
	for (int i = 0; i < size; i++) {
		if (this->ptr[i] != other.ptr[i])
			return (this->ptr[i] < other.ptr[i]);
	}
	//else if (this->size == other.size) {
		//for (int i = 0; i < size; i++) {
			//if (this->ptr[i] < other.ptr[i])
				//continue; 
			//else {
				//break; 
				//return false; 
			//}
	//	}
	//}
	//return true;

}

bool aint::operator>(const aint & other) const
{
	if (this->size > other.size)
		return true;
	for (int i = 0; i < size; i++) {
		if (this->ptr[i] != other.ptr[i])
			return (this->ptr[i] > other.ptr[i]);
	}
	//if (this->size > other.size)
		//return true;
	//else if (this->size == other.size) {
		//for (int i = 0; i < size; i++) {
			//if (this->ptr[i] > other.ptr[i])
				//continue;
			//else {
				//break;
				//return false;
			//}
		//}
	//}
	//return true;

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
	if (this->size == other.size) {
		for (int i = 0; i < size; i++) {
			if (this->ptr[i] == other.ptr[i])
				continue;
			else {
				break;
				return false;
			}
		}

	}
	return true;

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
	while ((size + val) > sizeDeclared) {
		sizeDeclared *= 2;
		extendSizeDeclared(sizeDeclared);
	}

	return *this;
}

aint& aint::operator>>=(const size_t& val)
{
	return *this;
}

aint& aint::operator+(const aint& other)
{
	if (other.size > this->size) {
		this->extendSizeDeclared(other.size);
	}

	int mem = 0;
	long long max;
	if (other.size >= this->size)
		max = other.size;
	else
		max = this->size;

	for (int i = 0; i < max; i++) {
		int sum = other.ptr[i] + this->ptr[i] + mem;
		mem = sum / 10;
		this->ptr[i] = sum % 10;

	}
	if (mem > 10) {
		this->extendSizeDeclared(this->size + 1);
		this->ptr[this->size - 1] = mem;
	}
	return *this;
}

aint& aint::operator-(const aint& other)
{

	aint larger; aint smaller;
	int count = 0;
	if (other.ptr > &this->ptr) {
		larger = other.ptr;
		smaller = this->ptr;
	}
	else {
		larger = this->ptr;
		smaller = other.ptr;
	}
	int diff = max.size - min.size;
	int sub;
	int borrow = 0;
	// chạy từ cuối lên đầu, số lớn trừ số nhỏ 
	for (int i = 0; i < max = 0; i--) {
		//  vd 987-123, hàng đơn vị 7 lớn hơn 3 
		if (max[i] >= min[i]) {
			sub = max[i] - min[i] - borrow;
			borrow = 0;
		}
		// vd 1870 - 199 hàng đơn vị 0 < 9 hoặc 994 - 95, hàng đơn vị 4 mượn 1 = 14 trừ 5 = 9 nhớ 1, hàng chục 9 + 1 (của 95) > 9 của 994  
		else if ((max[i] < min[i]) || ((max[i] == min[i]) && (min[i] + borrow > max[i]))) {
			sub = (max[i] + 10) - min[i] - borrow;
			borrow = 1;
		}
		this->ptr[i] = sub;
		count++;
	}
	// nếu còn dư 1 
	if (borrow) {
		// vd như 2675 - 978, 15- 8 = 7, mượn 1, 17 - (7+1) = 9, mượn 1, 16 - (9+1) = 6, borrow vẫn còn 1, lấy 2 - 1 
		sub = max[max.size - min.size] - 1;
		// vd như 222675 - 978, làm như trên, còn dư 2 số 2 đầu thì copy xuống 
		if (diff >= 2)
			for (int i = diff - 1; i >= 0; i--) {
				this->ptr[count - 1] = max[i];
				count++;
			}
	}

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
	unsigned* temp;
	temp = ptr;
	ptr = other.ptr;
	other.ptr = temp;

}
ostream& operator<<(ostream& os, const aint& out) {
	return os;
}
istream& operator>>(istream& is, aint& in) {
	return is;
}