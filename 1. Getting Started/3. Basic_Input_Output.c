#include<stdio.h>

/*
In this program, we will learn how to add two integer numbers using the basic input/output
printf( ); is used for the output as seen in the previous programs.
scanf( ); is the function used to take user input which is included in stdio.
We will learn how to use it.
*/

main()
{
  int a = 0, b = 0, sum = 0;

  //here we have declared 3 integer type variables for storing two integer input and one for their sum respectively.

  printf("Enter the first number:");
  scanf("%d", &a);
  printf("Enter the second number:");
  scanf("%d", &b);

  /*
  The & sign used with the variables is used for the process of call by reference which changes the value of variabe to the input vaule.
  Using the & sign also allocates the memory for the variables.
  */

  sum = a + b;

  printf("\nThe sum is: %d", sum);

  // you can also use printf("%d", a+b); but I'm using a third variable from simplification.
}
