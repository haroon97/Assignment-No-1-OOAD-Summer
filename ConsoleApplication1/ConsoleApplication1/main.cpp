#include "Name.h"
#include <iostream>
using namespace std;

int main() {
	Name n1;
	Name n2("HAROON", "AH%ED");
	n2.camelCase();
	n2.toLower();
	Name n3("haza", "ahmed");
	n3.toUpper();
	cout << n2.nameLength() << endl;
	n3.swapNames();
	n1.display();
	cout << n2.fullName() << endl;
	Name n4("ahmeddddd", "hassannnn");
	cout << n4.fullName() << endl;
	cout << n2.isValidName() << endl;
	cout << n4.getFirstName() << endl;
	cout << n4.getLastName() << endl;
	n4.setFirstName("ahmed");
	n4.setLastName("hassan");
	n4.toUpper();
	n4.display();
}