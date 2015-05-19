// Create memory leak by allocating memory,
// and not freeing it (unless argv[1] is provided).
//
// To see memory leak, call like this:
//
//		valgrind memory_leak
//
// To provide argv, call like this:
//
//		valgrind 'memory_leak x'

#include <stdio.h>
#include <stdlib.h>

#define	BYTES	100

int main(int argc, char **argv)
{
	char*	memory;

	printf("allocating %d bytes\n", BYTES);
	memory = malloc(BYTES);

	if (argc > 1) {
		free(memory);
		printf("freed memory\n");
		}
	else
		printf("did not free memory\n");

	return 0;
}
