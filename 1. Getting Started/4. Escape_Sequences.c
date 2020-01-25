#include<stdio.h>

/*
There are several escape sequences you will come across.
These are some special characters used to print or perform some specific characters/operations.
*/

main()
{

  /*
  Here is a list of some escape sequences you will use mostly.
  \a : alert character
  \b : backspace
  \f : formfeed
  \n : newline
  \r : carrier return
  \t : horizontal tab
  \v : vertical tab
  \\ : backslash
  \? : question mark
  \' : single quote
  \" : double quote
  One of the motive of these special characters is to simplify the program and this is why they are mostly used.
  For an example of creating a list of several items in a shop, you can use a single printf statement.
  */

  printf("XYZ shop\'s stock list\nItem\tQty\tPrice\nGuava\t50 kg\t40 Rs/kg\nGrapes\t40kg\t70 Rs/kg\nApple\t70kg\t20 Rs/kg");

}
