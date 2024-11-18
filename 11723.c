#include<stdio.h>
#include<string.h>


int s[21]={};

void list(int list[])
{
	for(int i = 0; i<20; i++)
	{
		if(list[i]==0)
		{
			for(int j = i; j<20; j++)
			{
				list[j] = list[j+1];
				if(j==19)
					list[j]==0;
			}
			break;
		}
	}
	for(int k = 0; k<20; k++)
	{
		s[k] = list[k];
	}
}

int main(void)
{
	int repeat;
	char command[7];
	int x;
	int ch = 0;
	
	scanf("%d", &repeat);
	for(int i = 0; i<repeat; i++)
	{
		scanf("%s %d", &command, &x);
		if(strcmp(command,"add") == 0)
		{
			for(int q = 0; q<20; q++)
			{
				if(x == s[q])
				{
					ch = 1;
					break;
				}
			}
			if(ch==0)
			{
				for(int w = 18; w>=0; w--)
				{
					s[w+1] = s[w];
				}
				s[0] = x;
			}
			ch = 0;		
		}
		else if(strcmp(command,"remove") == 0)
		{
			for(int q = 0; q<20; q++)
			{
				if(x == s[q])
				{
					s[q] = 0;
					list(s);
					
				}
			}
		}
		else if(strcmp(command,"check") == 0)
		{
			for(int q = 0; q<20; q++)
			{
				if(x == s[q])
				{
					printf("1\n");
					ch = 1;
				}
			}
			if(ch==0)
				printf("0\n");
			ch = 0;
		}
		else if(strcmp(command,"toggle") == 0)
		{
			for(int q = 0; q<20; q++)
			{
				if(x == s[q])
				{
					s[q] = 0;
					list(s);
					ch = 1;
				}
			}
			if(ch==0)
				{
					for(int w = 18; w>=0; w--)
					{
						s[w+1] = s[w];
					}
					s[0] = x;
				}
			ch = 0;
		}
		else if(strcmp(command,"all") == 0)
		{
			for(int i = 0; i<20; i++)
			{
				s[i] = i+1;
			}
		}
		else if(strcmp(command,"empty") == 0)
		{
			for(int i = 0; i<20; i++)
				s[i] = 0;
		}
		else if(strcmp(command,"print") == 0)
		{
			for(int i = 0; i<20; i++)
				printf("%d ",s[i]);
		}
	}
	
	return 0;
}
