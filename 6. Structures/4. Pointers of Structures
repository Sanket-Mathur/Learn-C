#include <stdio.h>

struct MyStruct
{
    int x, y;
};

int main()
{
    /*
    I'm here using int main() and returning 0 in the end juct because I was feeling like using it.
    Also in modern compilers, it gives a warning if using just main().
    Neither does it effect, feel free to use this to remove it.
    */
    
    /*
    Pointers to structures are a little bit defferent than usual but it is obvious that they cannot be for object members.
    The are defined with respect to the structure.
    Some properties that are same as before are:
        The pointers can still be used to print out the location of the structure object.
        Pointers still carry the same constant size of 8 (or 4).
    While the ones different are:
        Pointers need an special operator for accessing the members i.e. an arrow operator (->)
        To omit the arrow operator, use paranthesis to define (*ptr) as a single object 
    */
    
    struct MyStruct s1 = {10, 50};
    struct MyStruct *ptr = &s1;
    
    printf("%d\n", &s1);
    printf("%d\n\n", ptr);
    
    printf("%d %d\n", s1.x, s1.y);
    printf("%d %d\n", (*ptr).x, (*ptr).y);
    printf("%d %d\n", ptr->x, ptr->y);
    
    return 0;
}
