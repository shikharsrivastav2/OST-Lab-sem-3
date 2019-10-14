#include <stdio.h>
#include "libst.h"

int main()
{
	printf("Enter Number of Queries\n");
	int q;
	int arr[1000];
	scanf("%d", &q);
	int i, j, k;
	int top = -1;
	printf("Enter 1 to push, 2 to pop");
	for(i = 0; i < q; i++)
	{
		scanf("%d", &j);
		if(j == 1)
		{
			scanf("%d", &k);
			push(arr, top, 1000, k);
			if(top != 999)
				top++;
		}
		else
		{
			pop(arr, top);
			if(top != -1)
				top--;
		}
	}
}