#include <stdio.h>

/*
As told earlier,
These pointer can be used to access, assign or even modify the value of variable whose location the pointer is storing.
Let's modify the program we made earlier to see how to do that.
*/

// Now here we are using a function printarr to print out an array since we needed to implement this code multiple times.

void printarr(int a[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\n");
}

main()
{
    int x = 1, y = 0, arr[5] = {0,0,0,0,0};
    
    int *p;
    p = &x;
    
    // Let's say what is the value of y before we do any thing.
    
    printf("%d\n", y);
    
    // Now let's assign the value of y to the value of variable which is pointed by the pointer.
    
    y = *p;
    printf("%d\n", y);
    
    // The value of y is changed to that of x but let's modify x using the pointer.
    
    *p = 10;
    printf("%d\n", x);
    
    // As you see when astrick is used with the pointer, it directly access or modify the value of the variable.
    
    int *parr;
    parr = &arr[0];
    
    // Here we see the values stored in the arr that are 0 0 0 0 0.
    
    printarr(arr, 5);
    
    // But when we change the value of pointer as earlier, it only changes the first value of the arr.
    
    *parr = 1;
    printarr(arr, 5);
    
    // Not quite a surprise since we are pointing the first index of the array.
    // But what if we want to change the values further? We simply increment the value of the location stored.
    
    parr++;
    *parr = 2;
    printarr(arr, 5);
    
    // What it does is, it upgrades the location by the size of that data type.
    
    parr += 2;
    *parr = 4;
    printarr(arr, 5);
    
    // On increasing the value of location by a number like 2 doesn't change the value of location by 2.
    // Instead it is increased as a product of number and size of data type.
}
