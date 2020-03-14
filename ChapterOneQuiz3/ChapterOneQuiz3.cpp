//Rachelle Anne 
// 2-27-2020
// 2-27-2020
// This program will output the answer to question 3 in the chapter one quiz.

#include <iostream>

int main()
{
	int x{ 0 };
	std::cout << "Enter an integer: ";
	std::cin >> x;

	int y{ 0 };
	std::cout << "Enter another integer: ";
	std::cin >> y;

	std::cout << x << " + " << y << " is: " << x + y <<"\n";
	std::cout << x << " - " << y << " is: " << x - y <<"\n";


	return 0;
}