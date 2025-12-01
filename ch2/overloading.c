#include <stdio.h>

void show(int val) {
	printf("Integer: %d\n", val);
}

void show(double val) {
	printf("Double : %lf\n", val);
}

void show(char const *val) {
	printf("String : %s\n", val);
}

int main() {
	show(12);
	show(3.14159);
	show("Hello World!\n");

	show(0);
	// show(NULL);	// compiler error: ambiguous, do I mean (int)0 or (void *)0 ?
	show(nullptr);
}
