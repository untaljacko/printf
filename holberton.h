#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
int (*get_op_func(char *s))(va_list, char);
int _putchar(char);
int _strlen(const char *s);
void _puts(char *s);
void _atoi(char *s);
int print_rot13(va_list);
int print_rev(va_list);

int print_char(va_list);
int print_str(va_list);
int print_dec(va_list);
int to_binary(va_list);
int print_unsig(va_list);
int print_octal(va_list);
int print_hexa(va_list);
int print_hexaupper(va_list);
int rem_japanese(va_list);
int print_address(va_list);
int print_long(va_list);
int print_short(va_list);


/**
 *struct selector - selects the appropiate function
 *to perform based on the format
 *@selector: pointer to type of format
 *@f: pointer to function to print format
 */
typedef struct selector
{
	char *selector;
	int (*f)(va_list);
} selec;

#endif
