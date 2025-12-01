#include <stdio.h>

void *none() {
	printf("in the fuction to return a null void* pointer\n");

	return 0;

}

int main(int argc, char *argv[])
{

	int *empty = none();

	return 0;
}
