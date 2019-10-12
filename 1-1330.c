#include <stdio.h>

int main(){

	int A,B;

	scanf("%d %d", &A, &B);

	if( -10000 > A || A > 10000)
	{
		printf("[A = %d]A는 -10000와 10000사이의 정수만 입력하세요\n",A);
		return -1;
	}
	if( -10000 > B || B > 10000)
	{
		printf("[B = %d]B는 -10000와 10000사이의 정수만 입력하세요\n",B);
		return -1;
	}

	if(A>B)
		printf(">\n");
	else if(A<B)
		printf("<\n");
	else if(A==B)
		printf("==\n");

	return 0;
}
