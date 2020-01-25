#include<stdio.h>

/*
This is a seperate type of operator called a ternary operator.
This operator deals with three elements at once.
This is expressed as-
variable = expression? value1 : value2
*/

main()
{
  int x,y,z;
  
  printf("Enter two numbers:\n");
  scanf("%d", &x);
  scanf("%d", &y);
  
  z = x>y? x:y;
  
  printf("The greatest of two number which are provided is: %d", z);
}

/*
The ternary operator firstly checks the expression,
If the expression is true, the operator will assign the value1 to the the variable,
Else if the expression is false, the operator will assign the value2 to the variable.

In the given example, if x>y is true i.e. x is greater that y then the value of x will be assigend to the variable z.
Else if the value of y is greater then x the expression will be false and value of y will be assigned to z.
In case if the value of x and y are equal, the expression will be false and value of y (i.e ==x anyway) will be assigned to z.
*/
