/*
문제 5 (난이도 : 下)
사용자로 부터 N 값을 입력 받고 1 부터 N 까지의 곱을 출력한다.
*/

#include <stdio.h>

int main()
{
	int n,i,ans = 1;
	scanf("%d",&n);

	for(i = 1; i <= n;i++)
		ans *= i;

	printf("%d",ans);

	return 0;
}
