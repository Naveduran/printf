#include "holberton.h"
/**
 * mod_character_s - search for match and execute for the associate function
 * @next: the character to match
 * @dino: the position of next
 * Return: funcion donde hace match y de no haberlo, NULL
 **/
int (*mod_character_s(const char *next, int dino))(va_list)
{
	int i;
	spc_t options[] = {
		{"s", print_string},
		{"c", print_char},
		{"i", print_number},
		{"d", print_number},
		{"u", print_unsigned},
		{"r", print_reverse},
		{NULL, NULL}
	};

	for (i = 0; options[i].match != '\0'; i++)
		if (options[i].match[0] == next[dino])
			return (options[i].function);
	return (NULL);
}
