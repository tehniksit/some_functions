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
