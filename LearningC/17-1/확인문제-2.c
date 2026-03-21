#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cracker{
	int price;
	int cal;
}ba;;

int main(void)
{
/* 	struct cracker ba;  */

	printf("바사삭의 가격과 열량을 입력하세요 : \n");
	scanf("%d %d", &(ba.price), &(ba.cal));


	printf("바사삭의 가격 : %d원\n", ba.price);
	printf("바사삭의 열량 : %dkcal", ba.cal);

	return 0;

}