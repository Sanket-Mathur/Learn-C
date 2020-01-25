#include<stdio.h>

/*
#define can be used i three ways i.e.:
1. Creating Constant values.
2. Defining Marcro, small functions returning an expression.
3. Defining a keyword by a user defined name.
*/

#define PI 3.14

// PI is set to be a constant in the expression and trying to change to change the value of PI will throw an error.

#define AREA(r) PI*R*R

// AREA(r) is a macro which accepts a parameter i.e. r and return the expression PI*R*R.

#define c char

// The name of the keyword char is defined to be c and so can be used throughout the program.

typedef int mytype;

// typedef is another way for defining a datatype by an alias (different names).

const mytype R = 5.46;

// const in another value of creating unchangable values are thus create so called read-only variables.
// Here mytype is used in place of int as defined in the typedef statement above.

main()
{

  c sent[20] = "The area is: ";

  printf("%s %5.2f", sent, AREA(R));

}
