#include <iostream> 
#include <string> 

int main()
{
	int aFrist;
	int bSecond;
	int cAdd;
	int dSubtract;
	int EDivide;
	int fMultiply;
	int hReminder; 

	std::string nameString;


	std::cout << " What is your name: ";
	std::cin >> nameString;

	std::cout << "Enter a number:";
	std::cin >> aFrist;

	std::cout << "Enter a second number:";
	std::cin >> bSecond;

	cAdd = aFrist + bSecond;
	dSubtract = aFrist - bSecond;
	EDivide = aFrist / bSecond;
	fMultiply = aFrist * bSecond;
	hReminder = aFrist % bSecond; 



	std::cout << "The sum of " << aFrist << "+" << bSecond << " = " << cAdd << std::endl;
	std::cout << "The subtract of " << aFrist << "-" << bSecond << " = " << dSubtract<< std::endl;
	std::cout << "The Divide of " << aFrist << "/" << bSecond << " = " << EDivide << std::endl;
	std::cout << "The Multiply of " << aFrist << "*" << bSecond << " = " << fMultiply << std::endl;
	std::cout << "The Reminder of " << aFrist << "%" << bSecond << " = " << hReminder << std::endl;
	return 0;

}