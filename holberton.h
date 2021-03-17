#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h> /*for varyadic functions*/
#include <stdlib.h> /*for malloc and NULL*/
#include <unistd.h> /*for write*/
#include <limits.h> /* for test cases*/

/**
 * struct special_cases - struct for the special cases
 * @match: the special character to match after find a percentage
 * @function: the associated function to be called in each specialcase
 */

typedef struct special_cases
{
	char *match;
	int (*function)(va_list);
} spc_t;

/*format and print data*/
int _printf(const char *format, ...);

/*writes the character c to stdout*/
int _putchar(char c);

/*search for match and execute the function according to this*/
int (*mod_character_s(const char *next, int dino))(va_list);

/*prints a char*/
int print_char(va_list c);

/*prints a string */
int print_string(va_list s);

/*converts a string to an integer and prints its content.*/
int print_number(va_list i);

/*converts a string to an unsigned integer and prints its content*/
int print_unsigned(va_list u);

/*prints a string in reverse*/
int print_reverse(va_list r);

#endif /* HOLBERTON_H */
