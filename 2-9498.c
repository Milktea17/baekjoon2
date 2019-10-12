#include <stdio.h>

int main(){

	int score;

	scanf("%d", &score);

	if( 0 > score || score > 100)
	{
		printf("[score = %d]score는 0~100사이의 정수만 입력하세요\n",score);
		return -1;
	}

	if(score>=90 && score<=100)
		printf("A\n");
	else if(score>=80 && score<=89)
		printf("B\n");
	else if(score>=70 && score<=79)
		printf("C\n");
	else if(score>=60 && score<=69)
		printf("D\n");
	else
		printf("F\n");

	return 0;
}
