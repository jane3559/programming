#include<stdio.h>
#include<string.h>

char name[51];
float score;
char abc[3];
int result=0;
int repeat = 0;
float changescore = 0;
float scorePP = 0;

void change(char input[3],float scorer )
{
	
	if(strcmp(input,"A+")==0)
		{
			changescore += scorer*4.5;
			scorePP += scorer;
		}
	else if(strcmp(input,"A0")==0)
		{
			changescore += scorer*4.0;
			scorePP += scorer;
		}
	else if(strcmp(input,"B+")==0)
		{
			changescore += scorer*3.5;
			scorePP += scorer;
		}
	else if(strcmp(input,"B0")==0)
		{
			changescore += scorer*3.0;
			scorePP += scorer;
		}
	else if(strcmp(input,"C+")==0)
		{
			changescore += scorer*2.5;
			scorePP += scorer;
		}
	else if(strcmp(input,"C0")==0)
		{
			changescore += scorer*2.0;
			scorePP += scorer;
		}
	else if(strcmp(input,"D+")==0)
		{
			changescore += scorer*1.5;
			scorePP += scorer;
		}
	else if(strcmp(input,"D0")==0)
		{
			changescore += scorer*1.0;
			scorePP += scorer;
		}
	else if(strcmp(input,"F")==0)
		{
			changescore += scorer*0;
			scorePP += scorer;
		}
			
}

int main (void)
{
	for(int i = 0; i<20; i++)
	{
		scanf("%s %f %s", &name, &score, &abc);
		change(abc, score);
	}
	printf("%f", changescore/scorePP);
	
	
	return 0;
}
