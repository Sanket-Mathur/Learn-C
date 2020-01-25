/*
Let's get started with a little Hello World program
First let me introduce you to the standard libraries or better known header files
Definition: The standard library is a collection of standard programs stored for immidiate use of functions and operations.
These are basically some pieces of code that can be included in a program for using the functions pre-written in it.
In order to include these into your program, use
#include<header>
while the header is replaced by the name of the library. These librarioes generally works with an extension of .h
More on several header files and their functions in further programs.
stdio is a standard input output library used for the basic function
*/

#include<stdio.h>

/*
main function is the most important part of the program and is the point from where the compiler starts the execution of the file full of the code you have written.
It can return commands to the compiler to do some operation or going to another function.
These can return several data types like void i.e. empty/none, int i.e. integer, char i.e. character, float i.e. a floating point integer etc.
Here no data type is defined for the main function but this won't effect in case you use void main() instead of main(). In modern compilers main() is set as default to int main() with a return character
*/

main()
{

  printf("Helllo World!");

  // printf is a common output method and this function is written under the header file stdio.h
}

/*
Also since this is your first step towards learning C, you should know that the part I'm writing to breakdown and explain the code are commented out.
Definition: Comments are the parts/lines of the code that are ignored by the complier.
Comments are used by the programmers for their personal use as well as explaining their code to others.
'// for an example' defines a single line comment like the one after the printf function while
the opertors you can see at the beginning and end of this paragraph are used for opening and closing milti-line comments.
*/
