#include <stdio.h>

/*
Using typedef with structures make coding a little bit shorter for us.
It can be some real pain (not really) if you have to write struct struct_name identifier_name; repeateadly while defining objects.
Thus typedef can be used for creating a user defined name for definig an object of that struct.
*/

typedef struct MyStruct
{
    int a, b;
}my;

// typedef struct MyStruct my; is another statement that can be used instead of using typedef along with the struct definition.

int main ()
{
    my a;
    
    // Here while defining an object you just had to write my a; instead of struct MyStruct a; which saves you a little time.
    // Else everything will be just fine and same as before.
    
    scanf("%d %d", &a.a, &a.b);
    printf("%d %d", a.a, a.b);
    return 0;   
}
