/*
문제 4 (난이도 : 中)
1000000 이하의 피보나치 수열 
( N 번째 항이 N - 1 번째 항과 N - 2 번째 항으로 표현되는 수열, 
시작은 1,1,2,3,5,8,...)
의 짝수 항들의 합을 구한다
*/
#include <stdio.h>

int main()
{
	int i,tmp,a = 1, b = 1, sum = 0;
	while(b < 1000000)
	{
		tmp = b;
		b = a + b;
		a = tmp;

		if (b % 2 == 0)
			sum += b;
	}

	printf("%d",sum);
	return 0;
}



