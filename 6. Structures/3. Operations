#include <stdio.h>

struct MyStruct
{
    int x, y;
};

main()
{
    
    /*
    There are two types of operations that can be performed on a structure.
    They are agregate operations and segregate operations.
    First we will see agregate operations. There are 4 types of such operations.
    */
    
    // Assigning and Accessing members of object of a structure
    
    struct MyStruct s1 = {2,4};
    printf("%d %d\n", s1.x, s1.y);
    
    // Assigning structure object to structure variable
    
    struct MyStruct s2 = s1;
    printf("%d %d\n", s2.x, s2.y);
    
    // Address of structure. You can also do this be assigning a pointer but we will see it later.
    
    printf("%d %d %d %d\n", &s1.x, &s1.y, &s2.x, &s2.y);
    
    // Size of the structure. You can also calculate it by adding sizeof variables in the struct. Here it'll be 4 + 4
    
    printf("%d %d\n", sizeof(s1), sizeof(s2));
    
    /*
    Now here are segregate operations which are normal operations applied on members of object of a structure.
    e.g. Adding, multiplying and assigning 
    */
    
    s1.x += 5;
    s1.y = s2.x * s2.y;
    printf("%d %d\n", s1.x, s1.y);
    
}
