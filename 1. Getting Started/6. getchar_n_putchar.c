#include <stdio.h>

/*
getchar() and putchar() are two functions used to input character strings defined under stdio.h
getchar() does not require any argument but returns a value which can be of char but due to lack of memory assigned to char,
EOF(end of file) will not be able to be fitted inside char and thus int is used.
putchar() require a single argument but does not return any.
If you are using this program in UNIX system, to go to the EOF you must enter Ctrl + D.
While for Windows users, Ctrl + Z will act as the EOF when ending the program.
*/

main()
{
    int c;
    
    c = getchar();
    
    while((c = getchar()) != EOF)
        putchar(c);
        
    /*
    while here used is a loop or iteration statement which keeps on repeating the content in it until the condition in it is false.
    You will learn more about the iteration statements in the future but for now,
    the getchar() stores some value in c, the loop condition is true so it implement the body of the loop,
    while the putchar outputs the first character in c, the loop checks the condition again, 
    and hence on being true prints the second character and so on while the EOF is reached. 
    */

}
