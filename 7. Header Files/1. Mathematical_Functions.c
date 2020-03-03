#include<stdio.h>
#include<math.h>

/*
Here we are going to look at some of the mathematical functions.
These are included inside the header file math.h
Note that all the angles that will be used here will be in radians.
*/

int main()
{
    
    /*
    Basic Functions:
    - double pow(double a, double b); this is the power function which calculates a^b.
    - double sqrt(double a); this is the function user to calculate square root of a number.
    - double abs(double a); this is the absolute function which converts the number to positive. eg. abs(-5)=5.
    - double ceil(double a); this function returns the cieling value of a number. eg. ceil(2.5) = 3.0.
    - double floor(double a); this function returns the floor value of a number. eg. floor(2.5) = 2.0.
    */
    printf("Ceil 0.3 = %f\n", ceil(0.3));

    /*
    Trigonometric Functions:
    First comes the sine functions:
    - double sin(double a); this is the basic sin function where result will be between -1 to 1 .
    - double asin(double a); this is the arc sin or sin^-1 function. Here a must be [-1,1] and result in [0,pi].
    - double sinh(double a); this is the hypotenuse sin function.
    Then comes the functions related to cosine:
    - double cos(double a); this is the basic cos function where result will be between -1 to 1.
    - double acos(double a); this is the arc cos or cos^-1 function. Here a must be [-1,1] and result in [-pi/2,pi/2].
    - double cosh(double a); this is the hypotenuse cos function.
    Then comes the tangent functions:
    - double tan(double a); this is the basic tan function.
    - double atan(double a); this is the arc tan or tan^-1 function. Here a must be [-1,1] and result in [-pi/2,pi/2].
    - double atan2(double a, double b); this takes two arguments and calculate tan^-1(a/b), here result lies in [-pi,pi].
    - double tanh(double a); this is the hypotenuse tan function.
    Now there are no functions for cosec, sec and cot so you will have to use it like cosec x = 1 / sin x and so on.
    */
    printf("Sin 2 = %f\n", sin(2));
    printf("Cos^-1 0.5 = %f\n", acos(0.5));
    printf("Tanh 5 = %f\n", tanh(5));

    /*
    Logarithmic Functions:
    - double log(double a); this is the function used to calculate the natural log i.e. ln x.
    - double log10(double a); this is the function used to calculate the log to the base 10.
    No there are no function to find antilog but you can use the basic formula of antilog.
    i.e. antilog x = pow(10,x); which represents that antilog x = 10^x.
    */
    printf("Log10 5 = %f\n", log10(5));

    return 0;
}
