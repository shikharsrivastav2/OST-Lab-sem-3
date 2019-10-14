#include <stdio.h>

void push(int arr[], int top, int n, int ele)
{
	if(top == n-1)
	{
		printf("Overflow\n");
	}
	else
	{
		top++;
		arr[top] = ele;
	}
}