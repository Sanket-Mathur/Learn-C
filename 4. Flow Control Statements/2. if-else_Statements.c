#include<stdio.h>

main()
{
  int a, b;
  
  /*
  You are already familiar with the if statement so here is the if-else statements.
  else statement is used with if statement.
  It consists of statements or block of codes which is executed if the condition of the if statement is false.
  */
  
  scanf("%d", &a);
  scanf("%d", &b);
  
  if(a>b)
  {
    printf("a is bigger than b.\nThe difference is %d.\n", a - b);
  }
  else
  {
    printf("b is bigger than a.\nThe difference is %d.\n", b - a);
  }
  
  /*
  In this case if a and b are equal then it says b is bigger than a and difference is 0.
  A better way this is to use if-else ladder.
  It is just using several if-else statements inside each other.
  Also if else is treated as one single statement so not using the braces will still work and it will look even better.
  */
  
  if(a>b)
    printf("a is bigger than b.\nThe difference is %d.\n", a - b);
  else
    if(b>a)
      printf("b is bigger than a.\nThe difference is %d.\n", b - a);
    else
      printf("a and b are equal.");
  
}
