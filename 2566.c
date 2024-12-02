#include<stdio.h>

int main(void)
{
	int extent[9][9];
	int max[9];
	int result;
	int width, height;
	
	for(int i = 0; i<9; i++)
	{
		scanf("%d %d %d %d %d %d %d %d %d", &extent[i][0], &extent[i][1], &extent[i][2]
										, &extent[i][3], &extent[i][4], &extent[i][5]
										, &extent[i][6], &extent[i][7], &extent[i][8]);
		max[i] = extent[i][0];
		for(int j = 1; j < 9; j++)
		{
			if(max[i] < extent[i][j])
			{
				max[i] = extent[i][j];
			}
		}
	}
	
	result = max[0];
	for(int k = 1; k < 9; k++)
	{
		if(result < max[k])
		{
			result = max[k];
		}
	}
	for(height = 0; height<9; height++)
	{
		for(width = 0; width<9; width++)
		{
			if(result == extent[height][width])
			{
				printf("%d\n", result);
				printf("%d %d\n",height+1,width+1);
				break;
			}
		}
	}
}
