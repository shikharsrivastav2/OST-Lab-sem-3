#include <stdio.h>

void pop(int arr[], int top)
{
	if(top == -1)
	{
		printf("Empty\n");
	}
	else
	{
		printf("%d", arr[top]);
	}
}