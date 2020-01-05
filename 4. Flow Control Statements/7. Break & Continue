#include<stdio.h>

main()
{
    
    /*
    Break and Continue are the key words that are used inside loop statements.
    When break statement is encountered, the loop immediately terminates and the control goes to the statements following the loop.
    When continue statement is encountered, the control goes back to the top of the loop ignoring the statements left below it.
    */
    
    int i = 0;
    while(1)
    {
      if(i == 5)
        break;
      else
        if(i == 3)
        {
            i++;
            continue;
        }
      printf("%d", i);
      i++;      
    }
    
    /*
    Here you can see that the output is 0134.
    When the loop hits 2, the control goes back to the starting of the loop and thus print statement is not encountered.
    Though don't forget to miss the upgradation since it will cause the program to get stuck in an infinite loop.
    When the loop reaches 5, the loop terminates.
    */
}
