#include<stdio.h>
#include<string.h>

int main(void)
{
	int repeat;
	int number;
	char c[20];
	
	scanf("%d", &repeat);
	for(int i = 0; i<repeat; i++)
	{
		scanf("%d %s", &number, c);
		for(int k = 0; k< strlen(c); k++)
		{
			for(int j = 0; j<number; j++)
			{
				printf("%c", c[k]);
			}
		}
		printf("\n");
	}
	
}
