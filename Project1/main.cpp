#include "aint.hpp";
#include <iostream>;
#include<stdio.h> ;

using namespace std;

int main()
{
	aint x, y;
	//unsigned *aint::ptr;
	y = 5;
	x = y;
	cout << x.ptr[0] << " " << endl;
	printf("x << 1 = %d\n", x <<= (2));

	cout << y.ptr[0]++ << " " << endl;
	y.ptr[0]++;
	cout << y.ptr[0] << " " << endl;
	y.ptr[0]++;
	cout << y.ptr[0] << " " << endl;
	//aint& operator=(5);
	cout << x.ptr[0] << " " << endl;

	system("pause");

	//return 0;
}