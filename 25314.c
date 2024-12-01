#include<stdio.h>

int main(void)
{
	int byte;
	int CountLong = 0;
	scanf("%d", &byte);
	CountLong = byte / 4;
	if(byte%4 != 0)
		CountLong += 1;
	for(int i = 0; i<CountLong; i++)
	{
		printf("long ");
	}
	printf("int");
}
