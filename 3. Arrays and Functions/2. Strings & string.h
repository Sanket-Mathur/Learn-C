#include<stdio.h>
#include<string.h>

main()
{
    char s[51];
    
    /*
    Let's start from scanning and printing of character arrays or so called strings.
    While the scanf() function can be used for inputs of single characters, they won't work for strings.
    If you use scanf() for strings, it will stop scanning as soon as it comes across any space and thus only reading one word.
    To solve this problem, gets() is used for taking inputs of strings which reads the input until null character is reached.
    Null character refers to '\0' character which is present at the end of all the strings but here an enter does the job.
    i.e. it will keep reading the input until you press an enter.
    For printing purposes printf() can be used with a %s specifier but it is better to use puts() with gets()
    Syntax for gets() and puts() are,
    gets(var_name);
    puts(var_name);
    
    However, gets() is a dangerous function as it can push your program towards a run-time error by dealing with buffer.
    Thus its substitue fgets() is widely used now-a-days.
    Which has the following syntax,
    fgets(var_name, sizeof(var_name), stdin);
    */
    
    fgets(s, 51, stdin);
    printf("%s",s);
    puts(s);
    
    /*
    There is a special header file known as string.h which consisits of various functions dealing with string.
    You will get to know more about this header file later, but for now,
    Here is an example of functions that you can use which is defined in string.h
    strcpy(var2, var1); copies the content of string var1 into the string var2.
    strcmp(var1, var2); compares two strings and return 0 if they are equal.
    */
    
    char c[51];
    strcpy(c,s);
    puts(c);
    
    if(strcmp(s,c) == 0) // You can also write it as if(!strcmp(s,c)) since ! converts 0 to 1 and vice versa.
        printf("Both the strings are equal");
    else
        printf("Both the strings are unequal");
}
