#include <stdio.h>

int main(){

	int year;

	scanf("%d", &year);

	if( 1 > year || year > 4000)
	{
		printf("[year = %d]year는 1~4000사이의 정수만 입력하세요\n",year);
		return -1;
	}

	if(((year%4)==0) && ((year%100 != 0)||(year%400 == 0)))
		printf("1\n");
	else
		printf("0\n");

	return 0;
}
