#include<stdio.h>

int main(void)
{
	int width, height;
	
	scanf("%d %d", &width, &height);
	
	int A[height+1][width+1];
	int B[height+1][width+1];
	
	for(int i = 0; i<height; i++)
	{
		for(int j = 0; j<width; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	
	for(int i = 0; i<height; i++)
	{
		for(int j = 0; j<width; j++)
		{
			scanf("%d", &B[i][j]);
		}
	}
	
	for(int i = 0; i<height; i++)
	{
		for(int j = 0; j<width; j++)
		{
			printf("%d", A[i][j]+B[i][j]);
			if(width-1 == j)
				printf("\n");
			else
				printf(" ");
		}
	}
	
	return 0;
}
