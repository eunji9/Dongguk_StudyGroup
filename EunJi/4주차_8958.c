/*
"OOXXOXXOOO"�� ���� OX������ ����� �ִ�. O�� ������ ���� ���̰�, X�� ������ Ʋ�� ���̴�.
������ ���� ��� �� ������ ������ �� �������� ���ӵ� O�� ������ �ȴ�.
���� ���, 10�� ������ ������ 3�� �ȴ�.
"OOXXOXXOOO"�� ������ 1+2+0+0+1+0+0+1+2+3 = 10���̴�.
OX������ ����� �־����� ��, ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char QuizResult[81];
	int score = 0;
	int currentScore = 0;
	int count = 0;

	scanf("%d", &count);
	

	
	for (int j = 0; j < count; j++)
	{
		score = 0;
		currentScore = 0;
		scanf("%s", QuizResult);

		int length = strlen(QuizResult); //�̰Ÿ� for�� �ȿ� �־���� ��

		for (int i = 0; i < length; i++)
		{
			if (QuizResult[i] == 'O')
			{
				currentScore++;
				score += currentScore;
			}
			else
			{
				currentScore = 0;
			}
		}

		printf("�� ����: %d\n", score);
	}
	return 0;
}