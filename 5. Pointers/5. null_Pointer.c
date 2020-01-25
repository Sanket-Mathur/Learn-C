#include <stdio.h>

main()
{

    /*
    A null pointer is a pointer which don't have any value in it (not even 0).
    This is defined using NULL which specifies an empty space and is included in stdio.h.
    Comparing this pointer with any other pointer will always give false.
    Trying to do any operation on this pointer like printing will give an run-time error.
    */

    int *i = NULL;
    
    printf("%d", i);
    
    // This type of statement is used to know the location assigned but here it will show 0 i.e. no location is yet assigned.
    // Though if you try the sizeof() function it will still show the size to be same as others, since it is still of some type. 
    
    // printf("%d", *i);
    // Go try out this statement. This will give you a run-time error showing something like 'Segmentation Fault (core dumped)'.
    
}
