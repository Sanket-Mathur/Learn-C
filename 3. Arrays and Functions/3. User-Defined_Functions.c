#include<stdio.h>

/*
Definition: A User-Defined Function is a function written with the program for better code handling and multiple use.
Once you define a function you can use it multiple times throughout the program.
This avoids the repetition of code, shortens the code and make the code more easily managable.
*/

int sum(int x, int y)
{
  int result;
  result = x + y;
  return result;
  // You can also do return a + b; which will save both execution time and memory allocation.
}

int product(int x, int y);
/*
This is a function prototype which tells the compiler that this function exist somewhere in the program.
It is important to use a function prototype if you are defining the function below the main function.
Function Prototype consists of a terminator(;) instead of function definition.
It can also be defined as int product(int, int);
*/

main()
{

  int a = 4, b = 6;

  int s = sum(a,b);
  int p = product(a,b);

  printf("Sum: %d\nProduct: %d", s, p);

}

int product(int x, int y)
{
  int result;
  result = x * y;
  return result;
}
// This is the definition of function product whose prototype is deployed above.

/*
Another thing while using user defined functions is that default arguments can also be used. eg. int func( int a, int b = 0) 
It has a default argument so in case of in the main function, func(x) or func(y) is used instead of func(x,y)
It will pass the argument as a and will be taken to 0 by the function.
*/
