#ifndef FUNCTION_POINTER
#define FUNCTION_POINTER

void print_name(char *name, void (*f)(char *));
void f_function(char *str);
