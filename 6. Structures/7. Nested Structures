#include <stdio.h>

/*
Nested Structures means structures within structures, i.e. a structure consisting of an object of another structure.
These are really useful when managing various types of inter-connected data.
The variables of the nested structure can be accessed through the parent structure.
*/

typedef struct student
{
    int rollno, l_hall;
}stud;

struct school
{
    stud s;
    int school_id;
};

int main()
{
    struct school s1;
    printf("Student Details:\n");
    scanf("%d %d", &s1.s.rollno, &s1.s.l_hall);
    printf("School ID: ");
    scanf("%d", &s1.school_id);
    
    /*
    Here the structure variable are accessed using the following syntax,
    parent_struct.nested_struct.var_name;
    Which defines variable (var_name) is defined inside the nested_struct which is defined inside parent_struct.
    Now let's access all these variables and check if the values have been saved in their right place or not.
    */
    
    printf("\nStudent Rollno:%d\nLecture Hall:%d\nSchool ID:%d", s1.s.rollno, s1.s.l_hall, s1.school_id);
    return 0;
}
