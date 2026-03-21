#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile
{
	int num;
	char name[20];
	char *skill;
};

struct sports
{
	char *event;
	struct profile player;

};


int main(void)
{
	struct sports a; // 구조체 변수 선언

	a.event = (char *)malloc(80);		// 1)은 sports 구조체의 멤버변수 event는 포인터이기 때문에 공간 확보 필요(malloc).
	strcpy(a.event, "football");

	a.player.name = "Yuni Seo"; // 2) 배열명 name은 주소상수이므로 왼쪽(l-value)에 못옴. 

	a.num = 19; // 3) profile 멤버 변수 num에 접근 시 profile 구조체 변수 player를 통해 접근가능 -> a.player.name = 19;

	a.player.skill = (char *)malloc(80);
	scanf("%s", a.player.skill); // 4) profile 구조체의 멤버 변수 skill도 포인터이기 때문에 공간 확보 필요.


	printf("%s", a.event);

	free(a.event);				// 공간 확보 후 해제 반드시 할 것.
	free(a.player.skill);
}