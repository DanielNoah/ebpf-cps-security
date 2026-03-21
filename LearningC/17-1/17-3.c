#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile			// 신상명세 구조체 선언
{
	int age;
	double height;
};

struct student
{
	struct profile pf; 		// profile 구조체를 멤버로 사용
	int id;					// 학번을 저장할 멤버
	double grade;			// 학점을 저장할 멤버
};

int main(void)
{
	struct student yuni;	// student 구조체에 yuni 구조체 변수 선언
	yuni.pf.age = 23;		// pf 멤버의 age 멤버에 나이 저장
	yuni.pf.height = 173;	// pf 멤버의 height 멤버에 키 저장
	yuni.id = 20261123;
	yuni.grade = 3.7;

	printf("나이 : %d\n", yuni.pf.age);
	printf("키 : %.1lf\n", yuni.pf.height);
	printf("학번 : %d\n", yuni.id);
	printf("학점 : %.1lf\n", yuni.grade);


}