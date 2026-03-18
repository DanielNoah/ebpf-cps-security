#include <stdio.h>

int main(void)
{
	int sum[5][6] = {{1,2,3,4,5},
					{6,7,8,9,10},
					{11,12,13,14,15},
					{16,17,18,19,20}
	};
	int i,j;
		for(i=0; i<4; i++)
		{
			for(j=0; j<5; j++)
			{
			/*	hor_total = hor_total + sum[i]; 
				sum[4][j] = hor_total;
				printf("%5d\n",sum[i][j]); */ // 초기 코드("나름 애썼다...")

				sum[i][5] += sum[i][j];
				sum[4][j] += sum[i][j];
				sum[4][5] += sum[i][j]; // 고정된 5행과 6열의 자리에 앞에서부터 차례대로 값을 누적시킴.  
			}
		}
		for(i=0; i<5; i++)
		{
			for(j=0; j<6; j++)
			{
				printf("%5d", sum[i][j]);
			}
			printf("\n");
		}

	return 0;

}