// Rachelle Anne 
// 2-28-20
// 2-28-20
// This program is a more advanced version of Returning Values, including more complex returning features.

#include <iostream>

int giveValueFromUser()
{
	int numTaken{};
	std::cout << "May I please get an integer\nformatted number from you?" << std::endl;
	std::cin >> numTaken;

	return numTaken;
}

int addition(int x, int y)
{
	return x + y;
}

int multiply(int w, int h)
{

	return w * h;
}


int main()
{
	int numOne{ giveValueFromUser() };
	int numTwo{ giveValueFromUser() };
	int numThree{ giveValueFromUser() };
	
	std::cout << "Let's multiply your second and third number,\nand then add that new integer to your first number!\n";
	std::cout << multiply(numTwo, numThree) << "\n";
	std::cout << "Now that those two are multiplied,\nlet's add it to the first number!\n";
	std::cout << addition(numOne, multiply(numTwo, numThree)) << "\n";

	return 0;
}