#include <stdio.h>
/* 가로 세로 합 구하기 프로그램 */
int main()
{
	int num[5][6] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20}
	};

	int i, j;

	for (i = 0; i < 4; i++)			// num[4][5] 행렬 요소들의
	{								// 합산만을 위한 중첩 반복문
		for ( j = 0; j < 5; j++)
		{
			num[i][5] += num[i][j];
			num[4][j] += num[i][j];
			num[4][5] += num[i][j];
		}
		printf("\n");
	} 
	for (i = 0; i < 5; i++)			// num[5][]행과 num[][6]열에 
	{								// 합산값들을 넣기 위한 중첩 반복문
		for ( j = 0; j < 6; j++)
		{
			printf("%5d\t", num[i][j]);
		}
		printf("\n");
	} 

	return 0;

}

