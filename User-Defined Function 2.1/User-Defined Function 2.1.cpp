//Rachelle Anne
// 2-27-20
// 2-27-20
// This program will be my first hands-on lesson of User-Defined Functions.

#include<iostream>

void doPrint()
{
	std::cout << "In doPrint()\n";
}

int main()
{
	std::cout << "Starting main()\n";
	doPrint();
	//You can call other functions multiple times, so:
	doPrint();
	std::cout << "Ending main()\n";

	return 0;
}