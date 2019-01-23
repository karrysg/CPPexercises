// CPP program to demonstrate pre increment 
// operator. 
#include <iostream> 
using namespace std; 

int main() 
{ 
	int x = 10, a; 

	a = ++x; 
	cout << "Pre Increment Operation"; 

	// Value of a will change 
	cout << "\na = " << a; 

	// Value of x change before execution of a=++x; 
	cout << "\nx = " << x; 

	return 0; 
} 
