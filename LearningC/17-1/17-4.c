#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student									// 학생 구조체 선언
{
	int id;										// 학번 (멤버)
	char name[20];								// 이름 (문자열 배열 멤버)
	double grade;								// 학점 (멤버)
} s1 = { 20231123, "홍길동", 2.4 };				// 구조체 변수 선언과 초기화 (구조체 선언과 동시에 가능)

int main(void)
{
	struct student s2 = { 20231124, "이순신", 3.7 }, // 구조체 변수 선언과 초기화
				   s3 = { 20231125, "세종대왕", 4.5 };
				   
	struct student max;							// 최고 학점을 저장할 구조체 변수

	max = s1;									// s1을 최고 학점으로 가정 
												// (멤버별로 복사할 필요없이 대입연산 한 번으로 복사가능)
	if (s2.grade > max.grade) max = s2;			// s2가 더 높으면 max에 대입 
	if (s3.grade > max.grade) max = s3; 		// s3가 더 높으면 max에 대입

	printf("학번 : %d\n", max.id);				// 최고 학점 학생의 학번 출력
	printf("이름 : %s\n", max.name);				// 최고 학점 학생의 이름 출력
	printf("학점 : %.1lf\n", max.grade); 		// 최고 학점 학생의 학점 출력

	return 0;

}