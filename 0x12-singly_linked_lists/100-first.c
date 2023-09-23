#include <stdio.h>

void begin(void) __attribute__((constructor));

/**
 * begin - print a message before program
 */
void begin(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
