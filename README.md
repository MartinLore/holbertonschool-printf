<div align="center">
    <h1>Printf Project</h1>
</div>

This program is the implementation of C languge function printf() and this repsitory contains C program for _printf() function

## Description

The `_printf` function is a custom implementation of the formatted output conversion and print functionality in the C programming language. It supports various format specifiers to handle different data types and formatting options.

## Flowchart

<img src="https://i.imgur.com/L4dTpsD.png" alt="flowchart"
  width="628" 
     height="873" />

## Copilation:

`gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c`

## Authorized functions and macros

* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)

## Function prototypes

All function used to copile _printf() are included in header file `main.h`:
* int _printf(const char *format, ...);
* int putts(char *c);
* int _putchar(char c);
* int print_int(int value);

## File description

* *_printf.c:* - contains the function _printf()
* *_putchar.c:* - contains the function _putchar()
* *putts.c:* - contains the function putts()
* *main.h* - contains all headers, prototypes and structure declaration.
* *print_int.c* - contains the function print_int for the case of printing integer.

## Function Signature

int _printf(const char *format, ...);
### Parameters

*format*: A character string containing zero or more directives. Each directive begins with the '%' character and may be followed by conversion specifiers.

## Return Value

The function returns the number of characters printed, excluding the null byte used to end output to strings. In case of an error or if the format string is NULL, it returns -1.

## Format Specificers

* `%c`: Character - Prints a single character.
* `%s`: String - Prints a null-terminated string.
* `%d` , `%i`: Integer - Prints signed integers.
* `%%`: Percent - Prints a literal '%' character.

## Usage

To call the `_printf()` function the next code is required:
```c
#include "main.h"

int main() 
{
    _printf("string to print");
    return (0);
}
```

To compile the program this command has to be executed:
```sh
$ gcc *.c -o
```
This will create a compilation file, its name is `main.out`. You can run this file in your terminal with the next command:
```sh
$ ./main.out
```
## Example
Here's an example of how does the parameters work in our `_printf()` function:
```c 
#include "main.h"

int main()
{
    _printf("Cohort: "%i", 22);
    return (0);
}
```
The output of this main function will be:
```sh
$ ./main.out
Cohort: 22
```

## Author
##### Martin Morales
Holberton School, Cohort 22
##### Nicolas Bonilla
Holberton School, Cohort 22
