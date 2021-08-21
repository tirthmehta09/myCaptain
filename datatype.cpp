// C++ program to find the size of int, char,
// float and double data types
#include <iostream>
using namespace std;

int main()
{
	int integerType;
	char charType;
	float floatType;
	double doubleType;

	cout << "Size of char: " <<
	sizeof(charType) <<" byte\n";

	cout << "Size of int: " <<
	sizeof(integerType) <<" bytes\n";
	
	cout << "Size of float: " <<
	sizeof(floatType) <<" bytes\n";

	cout << "Size of double: " <<
	sizeof(doubleType) <<" bytes\n";

	return 0;
}

