#include<stdio.h>

/*
We will learn about array and how to perfom basic functions on an array
Definition: An Array is a collection of similar data type stored in a contigious memory location.
This means, that arrays are collection of various data belonging to same data type like int or char.
This data is stored in a contigious memory location i.e next to each other until the size runs out.
*/

main()
{

  int arr[5];

  /*
  Here an array is defined with a size of 50 and of type integer.
  This arr defines a storage of 200 bytes (of a modern 64-bit computer) i.e 4 * 50.
  The indices of an array starts from 0 and goes upto n-1 where n is the size of the array.
  */

  int i;

  for(i = 0; i < 5; i++)
    scanf("%d", &arr[i]);

  /*
  This is a for loop which will run from i = 0 till the condition is false i.e. till i = 4 while the value of i increments each time.
  This loop consists of a scanf function inside and takes the input of the user and stores them to the different indices of the array.
  arr[index] is the mathod to access the data stored at an index for example arr[2].
  The value of is changing as the loop continues and so the index.
  The data from the user is stored in the locations as arr[0], arr[1],...,arr[4].
  */

  for(i = 0; i < 5; i++)
    printf("%d\t", arr[i]);

  //This is the same loop but now with a printf function accessing the data stored in the array and printing it.

}
