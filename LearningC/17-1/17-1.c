#include <stdio.h>
#pragma pack(1) //	바이트 얼라인먼트를 1로 설정하면 패딩 바이트가 필요없음.

struct student 					// 구조체 선언
{
	short num;					// short형 멤버
	double grade;				// double형 맴버
	char ch1;
	int score;
	char ch2;
	char ch3;




};								// "세미콜론 사용

int main(void)
{
	struct student s1;			// struct student형의 변수 선언

	s1.num = 2;
	s1.grade = 2.7;
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);

	return 0;

}
