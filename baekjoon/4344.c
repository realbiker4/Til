#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int num;
	double count = 0;
	double score[1000][10];
	double avg = 0;
	double averageDb[1000];
	double countDb[1000];
	double stdScore;
	int stdNum;
	scanf("%d", &num);
	for (int j = 0; j < num; j++)
	{
		scanf("%d", &stdNum);
		for (int i = 0; i < stdNum; i++)
		{
			scanf("%lf", &stdScore);
			score[j][i] = stdScore;
		}
		for (int p = 0; p < stdNum; p++)
		{

			avg = avg + score[j][p];
		}
		avg = avg / stdNum;
		averageDb[j] = avg;
		avg = 0;
		for (int k = 0; k < stdNum; k++)
		{
			if(averageDb[j] < score[j][k])
			{
				count += 1;
			}
		}
		countDb[j] = (count *100) /(double)stdNum;
		count = 0;
	}

	for (int p = 0; p < num; p++)
	{
		printf("%0.3lf%% \n", countDb[p]);
	}
	return 0;
}
