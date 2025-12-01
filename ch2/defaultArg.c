#include <stdio.h>

// default values must be known at compile time, so they are defined with
// the function declaration, not implementation

void showstring(char *str = "Hello World!\n") {
	printf("%s", str);
}

// define defaults here, or in header for example
void two_ints(int a = 1, int b = 4);

int main() {
	showstring("Here's an explicit argument\n");
	showstring();

	two_ints();
	two_ints(20);
	two_ints(20, 5);
}

// do not define here, or in source file for example
void two_ints(int a, int b) {
	printf("%d + %d = %d\n", a, b, a+b);
}
