# Creating our own version of 'printf'

This repository contains our own version of the function printf, originally included in the library stdio.h.

![](https://camo.githubusercontent.com/7ae24cd7299112d0306349df5f4cd38c3f1c8db4ce4db21513c1009334c0cab2/68747470733a2f2f696d672e64657672616e742e636f6d2f64657672616e742f72616e742f725f323336383635345f316b574a782e6a7067)

---
> ## Introduction
function that emulates the operation of the printf function which delivers an output according to a format.
* Prototype: `int _printf(const char *format, ...)`;

### Flowchart

![](https://pbs.twimg.com/media/Ewq0PXyWEAIp3Z8?format=jpg&name=small)

---
>## Files
These are the files contained in this repository:
- **holberton.h** : the header file where are all the prototypes and the structure we use.
- **_printf.c** : the main program.
- **man_3_printf**: man-page for the program _printf.
- **_putchar.c** : here is the function to print one by one character.
- **mod_character.c** : here are the function in which all functions are connected to be executed in the main in case of '%' character.
- **0-basic.c**: here are the functions to print strings and characters, these will be executed by mod_character in case of a match with the first parameter of this one.
- **2-numbers.c** : here are the functions to print integer numbers, these will be executed by mod_character in case of a match with the first parameter of this one.
- **4-unsigned** : here are the function to print unsigned integer numbers, these will be executed by mod_character in case of a match with the first parameter of this one.
- **1415.c*** : here are the functions to print reversed strings and print in rot13, these will be executed by mod_character in case of a match with the first parameter of this one.

---
> ## Documentation

To use this function that clones the printf function, you must clone the `[printf](https://github.com/Naveduran/printf)` repository.

---
> ## Compilation

Your code will be compiled this way:
```c
gcc -Wall -Werror -Wextra -pedantic *.c
````
* As a consequence, be careful not to push any c file containing a `main` function in the root directory of * * your project (you could have a test folder containing all your `tests` files including `main` functions)
* Our main files will include your main header file (`holberton.h`): `#include holberton.h`
* You might want to look at the gcc flag `-Wno-format` when testing with your `_printf` and the standard `printf`.

---
> ## Formats

* *format* is a character string. The format string is composed of zero or more directives and conversion specifiers:

Specifier | Input example | Output example
| --- | --- | --- |
%c | "Printing a char: [%c]\n", 'X' | Printing a char: [X]
%s | "Printing a string: [%s]\n", "Hello, World" | Printing a string: [Hello, World]
%d or %i | "Printing a number: [%i]\n", 386 | Printing a number: [386]
%% | "Printing a percent sign: [%%]\n", % | Printing a percent sign: [%]

---
> ## Examples to use it

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

---

>## Environment
 This project has been tested on `Ubuntu 14.06.6 LTS`

---

>## Authors

* **Natalia Vera** [github](https://github.com/Naveduran) - naveduran@gmail.com
* **Salomé Grisales** [github](https://github.com/aike-s) - sagrilo804@gmail.com
