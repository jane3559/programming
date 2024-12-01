#include<stdio.h>

int main(void)
{
	int a, b, c;
	while(1)
	{
		int max = 0, per = 0, flag = 0;
		scanf("%d %d %d", &a, &b, &c);
		if(a>b&&a>c)
		{
			max = a;
			per = b+c;
			flag = 1;
		}
		else if(b>a&&b>c)
		{
			max = b;
			per = a+c;
			flag = 1;
		}
		else if(c>b&&c>a)
		{
			max = c;
			per = a+b;
			flag = 1;
		}
		
		if(a==0&&b==0&&c==0) break;
			
		if(max>=per && flag == 1){
			printf("Invalid\n");
			continue;
		}
			
		if(a==b&&b==c) printf("Equilateral\n");
		else if(a==b||b==c||a==c) printf("Isosceles\n");
		else printf("Scalene\n");
	}
}
