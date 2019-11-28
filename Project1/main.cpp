#include "aint.hpp";
#include <iostream>;
using namespace std;

int main()
{
	aint a(5);
	//aint& operator=(5);
	cout << a.getSize() << " " << a.getSizeDeclared(); 
	return 0;
}