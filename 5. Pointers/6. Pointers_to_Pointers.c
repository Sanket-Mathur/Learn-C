#include <stdio.h>

main()
{

    int r = 5;
    int *p1 = &r;
    
    /*
    This is pretty common stuff that you have been doing since the past 5 programs.
    But now we are going to define a pointer to our existing pointer p1.
    The logic behind this is that the new pointer p2 stores to value p1 while we know p1 stores value of integer r.
    Now how printing *p1 gives out the value of r and p1 gives out the location of r,
    **p2 prints value of *p1 i.e. the value of r,
    *p2 prints of the value of p1 i.e. location of r, and
    p2 gives location of p1. 
    */
    
    int **p2 = &p1;
    printf("%d\n", **p2);
    
    /*
    You can keep doing this for a while and this chain will keep on increasing.
    Here we are defining pointer ***p3 which is a pointer to **p2 which is a pointer to *p1 which is a pointer to r.
    Now printing the values of ***p3, **p3, *p3 and p3 will print the locations and values as claimed above.
    You can check that these value differ by 8 bytes i.e. the size of a pointer.
    */
    
    int ***p3 = &p2;
    printf("%d\t", p3);
    printf("%d\t", *p3);
    printf("%d\t", **p3);
    printf("%d\t", ***p3);
    
}
