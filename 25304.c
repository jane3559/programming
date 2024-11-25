#include<stdio.h>

int main(void)
{
	int x; 
	int n;
	int mon, num;
	int result = 0;
	scanf("%d", &x);
	scanf("%d", &n);
	for(int i = 0; i<n; i++)
	{
		scanf("%d %d", &mon, &num);
		result += mon * num;
	}
	if(result == x)
		printf("Yes");
	else
		printf("No");
}
