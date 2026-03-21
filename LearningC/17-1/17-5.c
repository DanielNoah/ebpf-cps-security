#include <stdio.h>

struct vision					// 시력 구조체 선언
{
	double left;
	double right;
} ygseo = { 2.0, 2.0};			// 구조체 변수 선언과 초기화 (시험삼아;)

struct vision exchange(struct vision robot); 	// 두 시력을 바꾸는 함수(프로토타입 선언)

int main(void)
{
	struct vision robot;						// 구조체 변수 선언

	printf("시력 입력 : ");
	scanf("%lf%lf", &(robot.left), &(robot.right)); // 시력 입력
	robot = exchange(robot);
	printf("바뀐 시력 : %.1lf  %.1lf\n", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot) 	// 두 시력을 바꾸는 함수
{
	double temp;								// 교환을 위한 임시 변수

	temp = robot.left;							// 좌우 시력 교환 
	robot.left = robot.right;
	robot.right = temp;

	return robot;								// 구조체 변수 반환
}

