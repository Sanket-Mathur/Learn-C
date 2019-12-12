#include<stdio.h>

/*
Definition: Call by Value passes the actual parameters by creating formal parameters and it copies the actual values for working on them.
Any change in the parameters inside the function is not reflected in the actual values.
Definition: Call by Reference passes the actual parameters and work with them.
Any change in the parameters inside the function is reflected in the actual value.
Call by Reference functions take the parameters in for of *var and so they use it in the function.
While calling them, & sign is used for the actual values to be accessable by the function.
Here we are making two functions for swaping the data
Also comparing the values of variables inside the functions to the values they possess in main from where the function is called.
*/

void cbv(int x, int y) // Call by Value
{
  x = x + y;
  y = x - y;
  x = x - y;

  printf("Call by Value in function:\t%d\t%d\n", x, y);
}

void cbr(int *x, int *y) // Call by Reference
{
  *x = *x + *y;
  *y = *x - *y;
  *x = *x - *y;

  printf("Call by reference in function:\t%d\t%d\n", *x, *y);
}

main()
{

  int a = 12, b = 25;

  cbv(a,b); // Call by Value
  printf("Call by Value in main:\t\t%d\t%d\n", a, b);

  cbr(&a,&b); // Call by Reference
  printf("Call by Reference in main:\t%d\t%d\n", a, b);

}
