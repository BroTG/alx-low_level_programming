#include <stdio.h>
/**
*print_name - prints a name
*@name: name of a person
*
*Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
/**
*f - displays the name
*@name: name of the person
*
*Return: Nothing
*/
void f_function(char *str)
{
	printf("Name: %s\n", str);
}

/**
*main - Entrance point main
*
*Explanation: to print a name
*parameter: function pointer
*
*Return: always return 0
*/
int main(void)
{
char aName[] = "Tycoon";

print_name(aName, f_function);

return (0);
//reference: ChatGPT
}

