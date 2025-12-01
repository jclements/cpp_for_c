#include <iostream>
#include <cstring>

struct Person {
	char name[80];
	char address[80];

	void print();
};

void Person::print() {
	std::cout << "Name:      " << name << "\n"
					     "Address:   " << address << '\n';
}

int main() {
	Person person;
	strcpy(person.name, "Jeremy");
	strcpy(person.address, "Governor 23");
	person.print();
}
