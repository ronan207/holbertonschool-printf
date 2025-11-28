# Printf

This project is a custom implementation of the standard C library function printf, created as part of the Holberton School curriculum.
It aims to teach variadic functions, format parsing, and manual output using write.

# Description 

The printf function formats and prints a series of characters and values to the standard output stream stdout.
Format specifications, beginning with the percent sign (%), determine the output format for any list of arguments following the format string. The format string is a multi-byte character string beginning and ending with its initial offset state.

# Special Characters

echo "%c print a single character"
echo "%d print a decimal (base 10) number"
echo "%e print an exponential floating-point number"
echo "%f print a floating-point number"
echo "%g print a general-format floating-point number"
echo "%i print an integer in base 10"
echo "%o print a number in octal (base 8)"
echo "%s print a string of characters"
echo "%u print an unsigned decimal (base 10) number"
echo "%x print a number in hexidecimal (base 16)"
echo "%% print a percent sign (\% also works"

# Requierement
Ubuntu 20.04 LTS
Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format
Betty style mandatory
No global variables
Max 5 functions per file
All prototypes in main.h

# Prototype

int _printf(const char *format, ...);

# Repository

ronan207/holbertonschool-printf

# Example Usage

_printf("Character: %c\n", 'A'); _printf("String: %s\n", "Holberton"); _printf("Percent: %%\n"); 
