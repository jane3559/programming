#include<stdio.h>

int main(void)
{
	int n;
	int flag = 1;
	scanf("%d", &n);
	for(int i = 0; i<2*n-1; i++)
	{
		if(flag<n)
		{
			for(int j = n-flag; j>0; j--)
			{
				printf(" ");			
			}
			for(int k = 1; k<=2*flag-1; k++)
			{
				printf("*");
			}
		}
		else if(flag ==n)
		{
			for(int k = 0; k<2*n-1; k++)
			{
				printf("*");
			}
		}
		else if (flag>n)
		{
			for(int j = 0; j<flag-n; j++)
			{
				printf(" ");
			}
			for(int k = 1; k<=(2*n-2)-(2*(flag-n)-1); k++)
			{
				printf("*");
			}
		}
		flag ++;
		printf("\n");
	}
}
