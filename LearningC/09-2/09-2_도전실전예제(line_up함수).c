#include <stdio.h>

void swap(double *pa, double *pb);
void line_up(double *maxp, double *midp, double *minp);

int main(void)
{
	double max, mid, min;

	printf("실수값 3개 입력 : ");
	scanf("%lf%lf%lf", &max, &mid, &min); // 각 실수값 주소에 입력값 대입 -> 각 실수값 변수에 값 입력
	line_up(&max, &mid, &min); // 각 입력값을 매개변수로 line_up 함수 호출
	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;	
}

void swap(double *pa, double *pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double *maxp, double *midp, double *minp)
{

	if (*midp < *minp)
	{
		swap(midp, minp);

	}		
	if (*maxp < *midp) // else if 로 조건 분기하면 위의 if 조건이 아닐 경우에만 적용된다
	{
		swap(maxp, midp); 		
	}
	if (*midp < *minp) // 마찬가지로 else if로 조건 분기하면 위의 조건이 둘 다 아닐 경우에만 적용된다
	{
		swap(midp, minp);
	}
}
	