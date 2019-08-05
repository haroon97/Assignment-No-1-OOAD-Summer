#include "Name.h"
#include <string>
#include <iostream>
using namespace std;


Name::Name(char* first, char* last)
{
	int length1 = strlen(first);
	firstName = new char[length1 + 1];  		// Size is greater than length of passed string because strlen does'nt count null character
	for (int i = 0; i < length1; i++) {			// Deep copy
		firstName[i] = first[i];
	}
	firstName[length1] = '\0';					// Placing null character at the last index as it is a character array

	int length2 = strlen(last);
	lastName = new char[length2 + 1];			// Same for lastName as we did for firstName
	for (int i = 0; i < length2; i++) {
		lastName[i] = last[i];
	}
	lastName[length2] = '\0';
}


Name::~Name()
{
	firstName = nullptr;					
	lastName = nullptr;
	delete[] firstName;
	delete[] lastName;
}

Name::Name(const Name &name)
{
	int length1 = strlen(name.firstName);			// Definition for Copy constructor using Deep copy
	firstName = new char[length1 + 1];
	for (int i = 0; i < length1; i++) {
		firstName[i] = name.firstName[i];
	}
	firstName[length1] = '\0';

	int length2 = strlen(name.lastName);
	for (int i = 0; i < length2; i++) {
		lastName[i] = name.lastName[i];
	}
	lastName[length2] = '\0';
}

// This is not a copy constructor, the inner functionality is same but it is a separate function
void Name::copyName(Name &name)
{
	int length1 = strlen(name.firstName);			
	firstName = new char[length1 + 1];
	for (int i = 0; i < length1; i++) {
		firstName[i] = name.firstName[i];
	}
	firstName[length1] = '\0';

	int length2 = strlen(name.lastName);
	for (int i = 0; i < length2; i++) {
		lastName[i] = name.lastName[i];
	}
	lastName[length2] = '\0';
}

// This makes first letter capital of all the attributes
void Name::camelCase() {
	if (firstName[0] >= 97 && firstName[0] <= 122) {		// It only converts the letter into camelCase when it is a lowercase letter		
		firstName[0] -= 32;			
	}
	if (lastName[0] >= 97 && lastName[0] <= 122) {
		lastName[0] -= 32;
	}
}

void Name::toLower() {
	for (int i = 0; firstName[i] != '\0'; i++) {
		if (firstName[i] >= 65 && firstName[i] <= 90) {
			firstName[i] += 32;
		}
	}

	for (int i = 0; lastName[i] != '\0'; i++) {
		if (lastName[i] >= 65 && lastName[i] <= 90) {
			lastName[i] += 32;
		}
	}
}

void Name::toUpper() {
	for (int i = 0; firstName[i] != '\0'; i++) {
		if (firstName[i] >= 97 && firstName[i] <= 122) {
			firstName[i] -= 32;
		}
	}

	for (int i = 0; lastName[i] != '\0'; i++) {
		if (lastName[i] >= 97 && lastName[i] <= 122) {
			lastName[i] -= 32;
		}
	}
}

int Name::nameLength() {
	int firstNameLength = 0, lastNameLength = 0;

	for (int i = 0; firstName[i] != '\0'; i++) {
		firstNameLength++;
	}

	for (int i = 0; lastName[i] != '\0'; i++) {
		lastNameLength++;
	}
	return firstNameLength + lastNameLength;
}

void Name::swapNames() {
	int firstNameLength = strlen(firstName);
	int lastNameLength = strlen(lastName);
	char *temp = new char[firstNameLength + 1];
	for (int i = 0; i < firstNameLength; i++) {
		temp[i] = firstName[i];
	}
	temp[firstNameLength] = '\0';
	firstName = new char[lastNameLength + 1];
	for (int i = 0; i < lastNameLength; i++) {
		firstName[i] = lastName[i];
	}
	firstName[lastNameLength] = '\0';
	lastName = new char[firstNameLength + 1];
	for (int i = 0; i < firstNameLength; i++) {
		lastName[i] = temp[i];
	}
	lastName[firstNameLength] = '\0';
	temp = nullptr;
	delete temp;
}

void Name::display() {
	cout << "First Name: " << firstName << endl;
	cout << "Last Name: " << lastName << endl;
}

char* Name::fullName() {
	int firstNameLength = strlen(firstName);
	int lastNameLength = strlen(lastName);
	int fullNameLength = firstNameLength + lastNameLength;
	char *fullName = new char[fullNameLength + 2];
	for (int i = 0; i < firstNameLength; i++) {
		fullName[i] = firstName[i];
	}
	fullName[firstNameLength] = ' ';
	int index = firstNameLength + 1;
	for (int i = 0; i < lastNameLength; i++) {
		fullName[index] = lastName[i];
		index++;
	}
	fullName[fullNameLength + 1] = '\0';
	return fullName;
}

bool Name::isValidName() {
	for (int i = 0; firstName[i] != '\0'; i++) {
		if ((firstName[i] >= 65 && firstName[i] <= 90) || (firstName[i] >= 97 && firstName[i] <= 122)) {
			continue;
		}
		else {
			return false;
		}
	}

	for (int i = 0; lastName[i] != '\0'; i++) {
		if ((lastName[i] >= 65 && lastName[i] <= 90) || (lastName[i] >= 97 && lastName[i] <= 122)) {
			continue;
		}
		else {
			return false;
		}
	}
	return true;
}

// Definitions for Getters
char* Name::getFirstName() {
	return firstName;
}

char* Name::getLastName() {
	return lastName;
}

// Definitions for Setters
void Name::setFirstName(char* fName) {
	int length = strlen(fName);
	firstName = new char[length + 1];
	for (int i = 0; i < length; i++) {
		firstName[i] = fName[i];
	}
	firstName[length] = '\0';
}

void Name::setLastName(char* lName) {
	int length = strlen(lName);
	lastName = new char[length + 1];
	for (int i = 0; i < length; i++) {
		lastName[i] = lName[i];
	}
	lastName[length] = '\0';
}
