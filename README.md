# Creating our own version of 'printf'

This repository contains our own version

![](https://camo.githubusercontent.com/7ae24cd7299112d0306349df5f4cd38c3f1c8db4ce4db21513c1009334c0cab2/68747470733a2f2f696d672e64657672616e742e636f6d2f64657672616e742f72616e742f725f323336383635345f316b574a782e6a7067)

## Files
These are the files contained in this repository:
- **holberton.h** : the header file where are all the prototypes and the structure we use.
- **_printf.c** : the main program.
- **_printf**: man-page for the program _printf.
- **mod_character.c** : here are the function in which all functions are connected to be executed in the main in case of '%' character.
- **0-basic.c**: here are the functions to print strings, reversed strings and characters, these will be executed by mod_character in case of a match with the first parameter of this one.
- **2-numbers.c** : here are the functions to print integer numbers, these will be executed by mod_character in case of a match with the first parameter of this one.
- **4-unsigned** : here are the function to print unsigned integer numbers, these will be executed by mod_character in case of a match with the first parameter of this one.
- **_putchar.c** : here is the function to print one by one character.

## Examples to use it
*Example 0*

    #include "holberton.h"
    /**
     * main - main function
     * Return: always 0
    **/
    int main()
    {
        _printf("Hello World!/n");
        return (0);
    }
    
    output: Hello World!
*Example 1*

    #include "holberton.h"
    /**
     * main - main function
     * Return: always 0
    **/
    int main()
    {
	    char string[7] = "World!"
	    
        _printf("Hello %s/n", string);
        return (0);
    }
    
    output: Hello World!
   *Example 2*
   

    #include "holberton.h"
    /**
     * main - main function
     * Return: always 0
    **/
    int main()
    {
	    int num = 1006
	    
        _printf("This is a number: %d/n", num);
        return (0);
    }
    
    output: This is a number: 1006


## Autohors

 - Natalia Vera: https://www.linkedin.com/in/natalia-vera-dur%C3%A1n-9356b128/
 - Salomé Grisales:https: //www.linkedin.com/in/salom%C3%A9-grisales-812224206/
