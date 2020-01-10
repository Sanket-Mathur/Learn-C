#include<stdio.h>

/*
Definition - A structure is an user-defined data type which hold some variables or objects inside it.
Structure is used to define some specific variables being used inside the program.
These are defined using the following syntax,
struct <struct name>
{
    <datatype> <identifier name>;
    <datatype> <identifier name>;
    :
    :
}<object name>;
Now the objects of this structure can be either declared along with the structure definition or using the syntax,
struct <struct name> <object name>;
This method is generally used for defining an object inside a specific scope.
*/

struct book
{
    char title[50];
    long book_no;
    char author[50];
};

main()
{
    struct book b1 = {"The C programming Language", 131103709, "Brian W. Kernighan & Dennis M. Ritchie"};
    
    /*
    The object variables are specified using the above syntax.
    And these object variables are accessed using the dot operator i.e. '.'
    e.g. b1.title, b1.book_no, b1.author
    */
    
    printf("%s\n%ld\n%s", b1.title, b1.book_no, b1.author);
}
