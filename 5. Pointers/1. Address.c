#include <stdio.h>

/*
Definition: A pointer of a specific data type stores the memory location of a variable of that data type.
These pointer can be used to access, assign or even modify the value of variable whose location the pointer is storing.
But more on this in the next program. Here we see how the assignment of location is done.
A pointer defined and pointed towards a variable using the following syntax:
int *pointer;
pointer = &variable;
*/

main()
{
    int x = 1, arr[10];
    
    // Let's now define a pointer and point it towards the variable x. 
    
    int *p;
    p = &x;
    
    // Printing the location might seems to be any random number but this is the location assigned by the CPU to your variable.
    
    printf("%d\n", p);
    
    // Now let's define a pointer towards the first index of the integer array.
    
    int *p2;
    p2 = &arr[0];
    
    /*
    Now if you see carefully, the number printed on the screen would be specific amount ahead or backward than that of p.
    The difference depend on the size of one integer array i.e.
    20 for a 32-bit system (2*10)
    40 for a 64-bit system (4*10)
    */
    
    printf("%d", p2);
}
