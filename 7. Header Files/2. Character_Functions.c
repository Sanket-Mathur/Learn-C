#include<stdio.h>
#include<ctype.h>

/*
Here we are going to look at some of the character manipulation functions.
These are included inside the header file ctype.h
*/

int main()
{
    
    /*
    Functions to check the type of character:
    int isalpha(char a); returns non-zero value if the character is an alphabet (a-z) or (A-Z) else 0.
    int isdigit(char a); returns non-zero value if the character is a digit (0-9) else 0.
    int islower(char a); returns non-zero value if the character is lower case (a-z) else 0.
    int isupper(char a); returns non-zero value if the character is upper case (A-Z) else 0.
    int isalnum(char a); returns non-zero value if the character is alphanumeric (a-z),(A-Z) or (0-9) else 0.
    int isxnum(char a); returns non-zero value if the character consists of hexadecimal number else 0.
    int iscntrl(char a); returns non-zero value if the character is any control char else 0.
    int isgraph(char a); returns non-zero value if the character is graphic (printable except space) else 0. 
    int isprint(char a); returns non-zero value if the character is printable else 0.
    int isspace(char a); returns non-zero value if the character is a space character (space, h-tab, v-tab etc).
    int ispunct(char a); returns non-zero value if the character is a punctuation mark else 0.
    */
    printf("Is \'^\' printable? The answer is %d\n", isprint('^'));

    /*
    Functions which minipulates the value of character:
    char toupper(char a); returns converted characters converting lower case letter to upper case.
    char tolower(char a); returns converted characters converting upper case letter to lower case.
    */
    // Let's make a program to convert all lower case letters of a string to upper case.
    char str[10] = "Hello01";
    for(int i=0; str[i]!='\0'; i++)
        str[i] = toupper(str[i]);
    printf("Initial: Hello01\nFinal: %s\n", str);

    return 0;
}
