#include <stdio.h>
/**
*main - Entarnce point main
*
*Explanation: to display sizes of types
*parameter: function printf
*
*Return: always return 0
*/
int main(void)
{
	printf("Size of a char: %ld bytes(s) \n", sizeof(char));
	printf("Size of an int: %ld bytes(s) \n", sizeof(int));
	printf("Size of a long int: %ld bytes(s) \n", sizeof(long int));
	printf("Size of a long long int: %ld bytes(s) \n", sizeof(long long int));
	printf("Size of a float: %ld bytes(s) \n", sizeof(float));
	return (0);

}
