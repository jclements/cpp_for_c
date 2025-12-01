// the scope resolution operator '::'

#include <stdio.h>

double counter = 50;	// global

int main() {
	for(int counter = 1; counter != 10; counter++) {	// local variable
		printf("%d\n", (int)(::counter / counter));	// global divided by local
	}
}
