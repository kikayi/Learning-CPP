// Rachelle Anne
// 2-27-2020
// 2-27-2020
// This program will use Returning Function Values shown in lesson 2.2
// Functions used: "main", "getValueFromUser", "anInterlude".

#include <iostream>

int getValueFromUser() //The return feature allows main to ask for the returning value. However,
//int Main() always starts first, then can it call other functions and programs.
{
	std::cout << "Please enter a value in integer format: " << std::endl;
	int input{};
	std::cin >> input;

	return input;
}

void anInterlude() //void's are used when there is no return value. Hence, it doesnt need a return value nor can it be called for a value.
{

	std::cout << "Hello! This is an interlude from your favourite commercial: \nMac N Cheese without Cheese! Please buy our products." << std::endl;

}


int main() //int main() always starts first, then can call for other functions/recieve their values back. Always remember "()"!
{
	int num{ getValueFromUser() };
	int othernum{ getValueFromUser() };
	
	anInterlude();

	std::cout << "\n\n\t\tBack to work!\n";
	std::cout << "Your first value (" << num << ") multiplied by two is: " << num * 2 << "." << std::endl;
	std::cout << "Your second value (" << othernum << ") multiplied by two is: " << othernum * 2 << "." <<std::endl;
	std::cout << "Both values added together (" << num << " and " << othernum << ") create " << num + othernum << ".\n\n";

	return 0;
}