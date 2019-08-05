#pragma once
class Name
{
	// Variables are kept private
private:
	char* firstName;
	char* lastName;

	// All other functions, constructors and destructor will be public
public:
	// Parameterized constructor with default values

	Name(char* first="ABC", char* last="XYZ");			

	~Name();

	Name(const Name &n);			// Prototype for Copy Costructor

	void copyName(Name &n);			// Prototype for copyName function. This is not copy constructor but a separate function

	void camelCase();

	void toLower();

	void toUpper();

	int nameLength();

	void swapNames();

	void display();

	char* fullName();

	bool isValidName();

	// Prototypes for Getters
	char* getFirstName();

	char* getLastName();

	// Prototypes for Setters
	void setFirstName(char* fName);

	void setLastName(char* lName);
};

