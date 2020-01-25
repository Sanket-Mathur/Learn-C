#include<stdio.h>

main()
{
  int a = 10;
  
  /*
  An expression is a combination of various operations and numeric values as themselves or as variables storing them.
  The precedence order is the order in which the operations are performed in an expression.
  Here is the precedence order followed in a c program:
  [] () -> .
  ! ~ ++ --
  * / %
  + -
  << >>
  < <= > >=
  == !=
  &
  ^
  |
  &&
  ||
  ?:
  = += -= *= /= %= &= ^= |= <<= >>=
  ,
  */
  
  a += 5 + 3 * 2 - (8 - ++a);
  printf("%d", a);
  
  /*
  Here the answer should be
  Brackets -> (8 - ++a) = 8 - 11 = -3
  So now the expression is a += 5 + 3 * 2 - -3 i.e. a += 5 + 3 * 2 + 3
  Multiplication -> 3 * 2 = 6
  So now the expresion is a += 5 + 6 + 3
  Addition -> 5 + 6 + 3 = 14
  So now the expression is reduced to a += 14
  Add Assignment -> a += 15 is simplified as a = a + 14 i.e. a = 11 + 14 = 25
  Hence the result should be 25, run it to check what does it result it.
  */
}
