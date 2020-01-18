#include <stdio.h>

struct details
{
    int a;
};

/*
Arrays and Structures are two very useful concepts on C programming but what if you conbine these two?
The answer is it will work flawlessly. It will define contigious memory locations each equal to the size of struct.
The array is defined as combination of variables of same datatype,
while struct is defined as combination of variables of different datatypes.
Thus array of objects are collection of objects of struct consisting various datatypes.
*/

int main()
{
    struct details arr_struct[5];
    scanf("%d %d %d %d %d", &arr_struct[0].a, &arr_struct[1].a, &arr_struct[2].a, &arr_struct[3].a, &arr_struct[4].a);
    printf("%d %d %d %d %d", arr_struct[0].a, arr_struct[1].a, arr_struct[2].a, arr_struct[3].a, arr_struct[4].a);
    return 0;
}
