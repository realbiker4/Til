#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main(void)
{
	int num;
	int count = 0;
	int score[1000][10];
	double avg = 0;
	double averageDb[1000];
	double countDb[1000];
	scanf("%d", &num);
	for (int j = 0; j < num; j++)
	{
		int stdNum;
		scanf("%d", &stdNum);
		for (int i = 0; i < stdNum; i++)
		{
			int stdScore;
			scanf("%d", &stdScore);
			score[j][i] = stdScore;
		}
		for (int i = 0; i < stdNum; i++)
		{

			avg = avg + score[j][i];
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
		countDb[j] = count *100 /num;
		count = 0;
	}

	for (int p = 0; p < num; p++)
	{
		printf("%0.3lf% \n", countDb[p]);
	}
	return 0;
}

