#include<stdio.h>
#include<math.h>
#include<string.h>
//c++ ->int(n[])
//c   ->(int)n[]

int main(void)
{
	int b;
	int ten=0;
	char n[31];
	int j = 0;
	
	scanf("%s %d", &n, &b);
	for(int i = strlen(n); i>0 ;i--)
	{
		if((int)n[j]>=48&&(int)n[j]<=57)	n[j] = (int)n[j]-48;
		else if ((int)n[j]>=65)				n[j] = (int)n[j]-55;
		ten += n[j]*pow(b,i-1);
		j++;
	}
	printf("%d",ten);
	
	return 0;
}
