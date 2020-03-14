//Rachelle Anne
// 2-19-2020
// 2-19-2020
// This program takes an integer given and multiplies it by 2



#include <iostream>;

int main()
{
	std::cout << "Multiply By Two Program" << std::endl;

	std::cout << "Please enter a number in the integer format: ";
	int num{ 0 };
	std::cin >> num;
	std::cout << "Now that you've entered your number (" << num << "), lets multiply it by two!" << std::endl;
	std::cout << "That number is: " << num * 2 << "!" << std::endl;

	//Modified version requested by the site!
	std::cout << "What about three times the original number?\nThree times that number is: " << num * 3 << "!";

	return 0;
}