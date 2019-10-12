#include <stdio.h>

int main(){

	int A,B,C;
	int result = 0;

	scanf("%d %d %d", &A,&B,&C);

	if( 1 > A || A > 100)
	{
		printf("[A = %d]A는 1~100사이의 정수만 입력하세요\n",A);
		return -1;
	}
	if( 1 > B || B > 100)
	{
		printf("[B = %d]B는 1~100사이의 정수만 입력하세요\n",B);
		return -1;
	}
	if( 1 > C || C > 100)
	{
		printf("[C = %d]C는 1~100사이의 정수만 입력하세요\n",C);
		return -1;
	}

	if(A>=B)
	{
		if(B>=C)
			result=B;
		else if(A>=C)
			result=C;
		else if(A<C)
			result=A;
	}
	else
	{
		if(A>=C)
			result=A;
		else if(B>=C)
			result=C;
		else if(B<C)
			result=B;
	}
	printf("%d\n",result);

	return 0;
}
