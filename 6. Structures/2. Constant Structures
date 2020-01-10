#include <stdio.h>

/*
There are two ways defining a constant class and you can use any of them. Both of them are shown in the following program.
The first way is to define the struct to be constant while the structure definition.
The second way is to define the object to be a constant or read-only object.
However, take a note that the variable values cannot be declared inside the structure definition to act as default.
*/

const struct School
{
    char sch_name[50], city[20];
}myschool = {"XYZ INTERNATIONAL SCHOOL", "CHANDIGARH"};

struct student
{
    char name[20];
    int adm_class;
    char DOB[10];
} const stud1 = {"John", 2, "1-01-2001"};

main()
{
    printf("School : %s\nCity : %s\n\n", myschool.sch_name, myschool.city);
    printf("Student Details:-\nName : %s\nAdmission Class : %d\nDOB : %s", stud1.name, stud1.adm_class, stud1.DOB);

    // Now these values can only be accessed and not modified. If you try to do so, it will show an error as we read earlier.

}
