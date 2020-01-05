#include<stdio.h>

main()
{
  
    /*
    Jump statement consists of labels and goto statements.
    This is used to jump the execution control from one part to the other withing the same function.
    Syntax of jump statement is,
    label:
    :
    :
    goto label;
    */
  
    int a;
    char o = 'n';
  
    Start:
    
    printf("Enter a number: ");
    scanf("%d", &a);
    
    if(a % 2 == 0)
        printf("Even");
    else
        printf("Odd");
        
    printf("\nDo you want to try again?(y/n)\n");
    scanf(" %c", &o);
    
    if(o == 'y')
        goto Start;
  
}
