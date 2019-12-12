#include<stdio.h>

/*
We will see three types of scope variables, global, local and static.
First Let's see global variable
Definition: Any variable declared outside any function body is called global variable.
It can be accessed throughout the program.
While in local variable, things are almost opposite.
Definition: And variable declared inside a body in called local variable.
It cannot be used anywhere outside that function.
The static variables are the third type of variables.
Definition: These are the variables which can retain the values stored in them when they were last used.
These variables after going out of scope and coming back retains the same value they were left with.
These are defined with the keyword static with a syntax of static [data type] [variable name];
*/

int x = 6, y = 10;

void func();

main()
{

  printf("x: %d\n", x);
  // This will use the global variable since local variable is not defined yet.

  int x = 2;
  printf("x: %d\n", x);
  // This will use the local variable since a variable with the same name has been defined in the local scope.

  func();

  printf("y: %d\n", y);
  // This will still use the global variable which have been unchanged since we are out of the scope of func()

  func();

}

void func()
{

  printf("y: %d\n", y);
  // This will use the global variable since local variable is not defined yet.

  static int y = 200;
  printf("y: %d\n", y);
  // This will use the local static variable and hence any change in it while the scope changes will be retained.

  y = 30;
  // This will change the value of the static variable and hence 30 will be retained when calling this function again.

}
