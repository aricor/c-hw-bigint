#include<stdio.h> 
#include <iostream>;

int main()
{
	// a = 5(00000101), b = 9(00001001) 
	long long a = 20, b = 9;

	// The result is 00001010  
	printf("a<<1 = %d\n", a << 60);

	// The result is 00010010  
	printf("b<<1 = %d\n", b << 1);
	system("pause");
}