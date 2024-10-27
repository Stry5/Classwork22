#include <iostream>

namespace printNames {
	void printNames(std::string fullName) {
		std::string firstName, lastName;

		//finds the space character
		short blankIndex = fullName.find_first_of(' ');

		//makes first and last names equal to substrings before and after the space
		firstName = fullName.substr(0, blankIndex);
		lastName = fullName.substr(blankIndex + 1, fullName.length() - 1);

		std::cout << "First name: " << firstName << std::endl;
		std::cout << "Last name: " << lastName;
	}
}
