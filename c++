//c++ page
#include <iostream>

int main()
{
	int myArray[3] = { 67, 23, 87 };

	std::cout << "my first element: " << myArray[0] << std::endl;
	std::cout << "my second element: " << myArray[1] << std::endl;
	std::cout << "my third element: " << myArray[2] << std::endl;

	//change first element
	myArray[0] = -100;

	std::cout << "my first element: " << myArray[0] << std::endl;
	std::cout << "my second element: " << myArray[1] << std::endl;
	std::cout << "my third element: " << myArray[2] << std::endl;
}