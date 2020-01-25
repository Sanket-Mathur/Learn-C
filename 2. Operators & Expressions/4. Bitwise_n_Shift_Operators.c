#include<stdio.h>

/*
There are five types of operators in C, Arithmetic, Logical/Relational, Increment & Decrement, Bitwise and Assignment operators.
Here we will cover Bitwise Operators and also shift operators whits also deals with bit size and binaries.
*/

main()
{
  int a = 7, b = 4, c;
  
  /*
  There are 4 types of Bitwise operators
  & Bitwise And
  | Bitwise Or
  ~ Bitwise Not which is a primary operator while all the others are binary
  ^ Bitwise Xor
  These converts the two operands to binary and executes the function of the logic gates on them.
  */
  
  c = a & b;
  printf("%d\n", c);
  
  // a = 7 is 0111 while b = 4 is 0100. a & b following the logic function of AND gate. 0111 & 0100 = 0100 which is 4
  
  c = a | b;
  printf("%d\n", c);
  
  // a = 7 is 0111 while b = 4 is 0100. a | b following the logic function of OR gate. 0111 | 0100 = 0111 which is 7
  
  c = ~a;
  printf("%d\n", c);
  
  // a = 7 is 0111. ~a following the logic function of NOT gate. ~0111 = 1000 which should be 8
  // Since most of the compilers follows an 8-bit length, it also converts positive to negative thus -8
  
  c = a ^ b;
  printf("%d\n", c);
  
  // a = 7 is 0111 while b = 4 is 0100. a ^ b following the logic function of XOR gate. 0111 ^ 0100 = 0011 which is 3
  
  /*
  Now let's talk about Shift Operators
  These are binary operators. These are of 2 types.
  >> Right shift operator
  << Left shift operator
  It shifts the binary values of 0 and 1 to the assigned direction.
  */
  
  a = 10;
  c = a << 3;
  printf("%d\n", c);
  
  // a = 10 is 1010 in binary. While in 8-bit system it is 00001010. It shifts the binary to 01010000 which is 80.
  // It is calculated by multiplying the number of the left by 2 n times while the number on right hand side is n.
  // e.g. 10 << 2 is (10 * 2 = 20), (20 * 2 = 40) and (40 * 2 = 80)
  
  c = a >> 2;
  printf("%d\n", c);
  
  // a = 10 is 1010 in binary. While in 8-bit system it is 00001010. It shifts the binary to 00000010 which is 2.
  // It is calculated by dividing(integer division) the number of the left by 2 n times while the number on right hand side is n.
  // e.g. 10 >> 2 is (10 / 2 = 5) and (5 / 2 = 2)
}
