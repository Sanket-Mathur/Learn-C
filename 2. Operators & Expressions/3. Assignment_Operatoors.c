#include<stdio.h>

/*
There are five types of operators in C, Arithmetic, Logical/Relational, Increment & Decrement, Bitwise and Assignment operators.
Here we will cover Assignment Operators.
*/

main()
{
  int a; 

  /*
  There are several assignment operators including one simple assignment operator and various short-hand assignment operators.
  Simple assignment Operator-
  = i.e. Simplly assigning some value to a variable
  Short-hand assignment operators-
  += i.e. Add and Assign operator
  -= i.e. Substract and Assign operator
  *= i.e. Multiply and Assign operator
  /= i.e. Divide and Assign operator
  %= i.e. Modulo and Assign operator
  >>= i.e. Right Shift and Assign operator
  <<= i.e. Left Shift and Assign operator
  &= i.e. Bitwise And and Assign operator
  |= i.e. Bitwise Or and Assign operator
  ^= i.e. Bitwise Xor and Assign operator
  Now I know that you might not know about last five operators but you are going to learn about them in the next program.
  */
  
  // Simple Assignment Operator
  a = 10;
  printf("a = %d\n", a);
  
  // Short-hand Assignment Operators
  a += 5;
  printf("a = %d\n", a);
  
  a -= 5;
  printf("a = %d\n", a);
  
  a *= 5;
  printf("a = %d\n", a);
  
  a /= 5;
  printf("a = %d\n", a);
  
  a %= 5;
  printf("a = %d\n", a);
  
}
