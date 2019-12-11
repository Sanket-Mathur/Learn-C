#include<stdio.h>

/*
Modified format specifiers are the format specifiers which are modified to print a coustomized output
%2.3f for example means that there should be atmost 2 digits on the left of the decimal and exactly 3 digits on the right of it
In case of less than 3 decimal places after the decimal, the compiler places zeros after the ending of the number.
In case of more than 3 decimal places after the decimal, the complier rounds off the digits folowing the given pattern,
If the digit nect to the last place printing is greater than 5 the compiler add 1 to the last digit.
If the digit next to the last place printing is lesser than 5 there is no change in the last digit.
In case of 5 as the digit next to the last, the compiler will increase it by one only if there exist a non-zero digit after the 5.
*/

main()
{

  float f1, f2;

  f1 = 0.21650003;
  f2 = 0.2543;

  printf("%2.3f\n%2.3f", f1, f2);

}

//This can be used for other format specifiers as well.
