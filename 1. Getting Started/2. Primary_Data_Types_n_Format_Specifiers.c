#include<stdio.h>

/*
There are two basic types of data types i.e. Primary and User-Defined data types.
In this program, we will talk about the Primary data types or the primitive or built-in data types.
Definition: Primary data types are the data types built-in within the language with a fixed memory allocation,
in C there are 4 primitive data types viz. character, integer, float and void.
*/

main()
{

  char c = 'A';
  printf("%c \n", c);

  /*
  There are two types of characters viz.
  1. signed char having a range from -128 to +127 and taking 1 byte
  2. unsigned char having a range from 0 to +255 and taking 1 byte as well
  */

  int i = 15;
  printf("%d %i \n", i, i);

  /*
  There are six types of integers viz.
  1. int having a range of -2,147,483,648 to 2,147,483,647 and taking 4 bytes
  2. unsigned int having a range of 0 to 4,294,967,295 and taking 4 bytes
  3. short having a range of -32,768 to 32,767 and taking 2 bytes
  4. unsigned short having a range of 0 to 65,535 and taking 2 bytes
  5. long having a range of -9223372036854775808 to 9223372036854775807 and taking 8 bytes
  6. unsigned long having a range of 0 to 18446744073709551615 and taking 8 bytes
  */

  float f = 15.2122;
  printf("%g %G %f %e %E \n", f, f, f, f, f);

  /*
  There are three types of floating point decimal viz.
  1. float having a range of 1.2E-38 to 3.4E+38 with 6 decimal precision and taking 4 bytes
  2. double having a range of 2.3E-308 to 1.7E+308 with 15 decimal precision and taking 8 bytes
  3. long double having a range of 3.4E-4932 to 1.1E+4932 with 19 decimal precision and taking 10 bytes
  */

  /*
  There is another data type void which means no value.
  This is usually used to specify the type of functions which returns nothing.
  */
  
  // The \n character used within the print statements is the newline character. You will get to see more of these in the future.
}

/*
Talking about the format specifiers also called the place holders are use to define the format of variable.
Various different format specifiers are used for printing the variable in different formats.
Here's a list of type specifiers for you to use.
char/signed char/unsigned char - %c
int - %d, %i
unsigned int - %lu, %u
short - %d, %hi, %i
unsigned short - %d, %hu, %i
long - %d, %i, %l, %ld, %li
unsigned long - %lu, %u
float - %e, %E, %f, %g, %G
double - %e, %E, %f, %g, %G, %lf
long double - %Lf
Some extra format specifiers for further use of the C programing language.
long long - %lli, %lld
unsigned long - %llu
octal representation of any Integer type - %o
hexadecimal representation of any integer type - %x, %X
void * - %p
char * - %s
*/
