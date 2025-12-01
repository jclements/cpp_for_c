#include <iostream>

int main() {
	int ival;
	char sval[30];

	std::cout << "Enter a number:\n";
	std::cin >> ival;
	std::cout << "And now a string:\n";
	std::cin >> sval;

	std::cout << "The number is: " << ival << "\n"
						<< "And the string is: " << sval << '\n';
}
