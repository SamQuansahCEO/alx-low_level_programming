#include <stdio.h>
/**
 * main entry
 *
 * return 0
*/
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an init: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", sizeof(long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
