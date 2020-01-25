#include<stdio.h>

main()
{
    
    /*
    You already know about the for and while loops but they are entry control loops.
    do-while loop is an exit control loop i.e. the condition is checked towards the end of the loop.
    Thus no matter if the condition is true or false, the loop will execute atleast once.
    The syntax for a while loop is:
    declaration
    do
    {
        statement
        upgradation
    }while(condition)
    */
    
    int i = 0;
    do
    {
        printf("This is a do while loop\n",i);
        i++;
    }while(i < 5);
    
    // Let's try if the condition is already false i.e. the condition is 0
    
    do
    {
        printf("Will it execute");
    }while(0);
    
}
