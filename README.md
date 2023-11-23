# The _printf program 

## Description

This project involves creating a custom implementation of the *_printf* function that generates formatted output based on a given format string. The function is designed to mimic the behavior of the standard C library function printf. The _printf function is responsible for writing the formatted output to the standard output stream, also known as *stdout*.
The goal of this project is to create a flexible and efficient implementation of _printf that can handle various input formats and produces the expected output. At the heart of this program stands the syncronisation between different key components of the C language,like structure,pointers and variadic functions.
As a more in-depth mechanism and anatomy of this program we have defined various functions for different datatypes,with a return value of their length ,to be inputed to the total length of the input of the _printf function and to be displayed in stdout.Then we have declared a custom structure with 2 members a pointer to a conversion specifier and pointer to the respective function to be invoked.Then we have created an array of member like structures with the respective pairs for all the basic datatypes like int,char.Then we have attached a pointer to this knot function to be called to the _printf function when a format specifier is identified during iteration in the main input string.Then we have coded the actual variadic _printf function,iterating through the input,placing conditions for specific cases to provide a clean output.This function returns the length of the string to be printed.  

## Function Prototype
The prototype for the custom _printf function is as follows:
```
int _printf(const char *format, ...);
```

## Return value
The _printf function returns an integer, representing the total number of characters printed (excluding the null byte used to terminate strings). If an error occurs during the execution of _printf, it returns a negative value.

## Supported Conversion Specifiers

 The format string provided to the function contains zero or more directives, each corresponding to a specific conversion specifier. The supported conversion specifiers in this project are:

* %c: Character - Output a single character.
* %s: String - Output a null-terminated string.
* %%: Percent sign - Output a literal '%' character.
* %d and %i: Integer - Outputs a signed decimal integer.

For each conversion specifier encountered in the format string, the _printf function processes the input arguments accordingly and writes the formatted result to stdout. 

## How to use
1. Compile the source code
```
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
```
2. Include the custom main.h header file in your C source files:
```
#include "main.h"
```
3. Use the _printf function in your code, just like the standard printf.
```
int main() {
    _printf("Hello, %s! The answer is %d.\n", "user", 42);
    return 0;
}
```
## Example
```
int main(void)
{
	_printf("hello %s\n", "world", 1, 2, 3, 4);
    return 0;
}
```
Output:
```
hello world

```

## This program was created by Eder Hodaj & Enea Milo 
