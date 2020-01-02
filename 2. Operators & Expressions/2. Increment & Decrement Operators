#include<stdio.h>

/*
There are two types of operators in C, Arithmetic, Logical/Relational, Increment & Decrement, Bitwise and Assignment operators.
Here we will cover Increment & Decrement operators.
*/

main()
{

  /*
  There are 2 increment and 2 decrement operators.
  These opators are primary operators since each of them deals with one element.
  Let x be any variable,
  ++x is called as pre increment and changes the value to x to 1 higher before using it.
  x++ is called as post increment and changes the value to x to 1 higher after using it.
  Similarly,
  --x is called as pre decrement and changes the value to x to 1 lower before using it.
  x-- is called as post decrement and changes the value to x to 1 lower after using it.
  */

  int a = 5;
  printf("a = %d,", a);
  printf(" ++a = %d\n", ++a);
  printf("Now, a = %d,", a);
  printf(" a++ = %d\n", a++);
  printf("But after printing, a = %d\n\n", a);

  a = 5;
  printf("a = %d,", a);
  printf(" --a = %d\n", --a);
  printf("Now, a = %d,", a);
  printf(" a-- = %d\n", a--);
  printf("But after printing, a = %d\n\n", a);

  /*
  One of the most important things is that the increment and decrement operators works from right to left when using them.
  For example if you try to use the escape sequence to convert all the lines given above into one single printf statement.
  The operators will work from right to left and them print them in the same order as stated inside the function.
  Here if you see in the example, the value will increase like a, a++, a, ++a, a making it 5, 5, 6, 7, 7.
  Then while executing, a is 7, ++a is 7 and a++ is 5
  Thus it will print it as 7, 7, 7, 5, 7.
  */

  a = 5;
  printf("a = %d, ++a = %d\nNow, a = %d, a++ = %d\nBut after printing, a = %d", a, ++a, a, a++, a);

}
