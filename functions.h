#include <stdio.h>
#include <string.h>
//Prototypes of fuctions and explanations


/*
The function outputs even numbers in given array
Usage of function below

int arr[] = { 1, 2, 3, 4, 5, 6, 544, 32, 54, 67, 66, 98 };
int n = sizeof(arr) / sizeof(arr[0]);
outputEvenNum(arr, n);

*/
void outputEvenNum(int arr[], int n);

/*
The function performes revers of given string
Usage of function below

char arr[] = "Please reverse this string!";

strReverse(&arr);

*/

void strReverse(char(*str)[]);


/*
The function changes an even element in array to 0
*/
void changeToZero(unsigned char *p[], char n);