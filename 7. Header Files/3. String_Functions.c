#include<stdio.h>
#include<string.h>

/*
Here we are going to look at some of the string manipulation functions.
These are included inside the header file string.h
*/

int main()
{
    /*
    strlen(char *a); this function returns the size of the string.
    strcat(char *a, char *b); this function concatinates(combines) two strings.
    strncat(char *a, char *b, int l); it concatinates the string b upto l characters with a.
    strcmp(char *a, char *b); this compare two strings and return 0 if they are equal else a non-zero value depending on lexicography.
    strncmp(char *a, char *b, int l); it compares the strings upto l characters.
    strcpy(char *a, char *b); this copies the value of string b to string a.
    strncpy(char *a, char *b, int l); it copies the value of b to a upto l characters.
    strchr(char *a, char c); this returns a pointer to the first occourance of character c in string a.
    strrchr(char *a, char c); this returns a pointer to the last occourance of character c in string a.
    strstr(char *a, char *c); this returns a pointer to the first occourance of character of string c in string a.
    strspn(char *a, char *c); this returns index of first character of string a which is not present in string c.
    strcspn(char *a, char *c); this returns index of first character of string a which is present in string c.
    strpbrk(char *a, char *c); this returns a pointer to the first character of string a which is present in string c.
    */

    char a[20]= "Hey man!", b[20] = "Do I know you?";
    printf("Using strpbrk: %s\n", strpbrk(a,b));
    printf("Using strrchr: %s\n", strchr(a,'m'));
    printf("Using strcat: %s\n", strcat(a,b));

    return 0;
}
