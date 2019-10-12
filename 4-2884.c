#include <stdio.h>

int main(){

	int H,M;

	scanf("%d %d", &H,&M);

	if( 0 > H || H > 23)
	{
		printf("[H = %d]H는 0~23사이의 정수만 입력하세요\n",H);
		return -1;
	}
	if( 0 > M || M > 59)
	{
		printf("[M = %d]M는 0~59사이의 정수만 입력하세요\n",M);
		return -1;
	}

	if(M-45<0)
	{
		M=M+15;
		H=H-1;

		if(H==-1)
			H=23;
	}
	else if(M-45 >=0)
	{
		M=M-45;
	}
	printf("%d %d\n", H, M);
	return 0;
}
