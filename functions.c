#include "functions.h"


void outputEvenNum(int arr[], int n)
{
	int num = 0;
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] % 2 == 0) {
			printf("The number %d in the array is even.\n", arr[i]);
			num++;
		}
	}
	printf("\nAmount of even numbers is %d.\n", num);
}

void strReverse(char (*str)[])
{
	int i, j = 0;
	char temp;
	int length = 0;
	while ((*str)[length] != '\0')
		length++;
	
	for (i = 0, j = length - 1; i < j ; i++, j--) {
		temp = (*str)[i];
		(*str)[i] = (*str)[j];
		(*str)[j] = temp;
	}
	for (int t = 0; t < length; t++) {
		printf("%c", (*str)[t]);
	}
	
}
	
void changeToZero(unsigned char (*p)[], char n)
{
	for (unsigned char i = 0; i < n-1; i++) {
		if ((*p)[i] % 2 == 0) {
			(*p)[i] = 0;
		}
		printf("%d ", (*p)[i]);
	}
}
