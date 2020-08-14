/*
문제 7 (난이도 : 中上)
임의의 자연수 N 을 입력 받아 N 을 소인수 분해 한 결과를 출력하여라. 예를 들어서 N = 18 일 경우

N = 1818 = 2 * 3 * 3

*/

#include <stdio.h>

int main()
{
	int i,j, n;
	scanf("%d",&n);

	printf("%d = ",n);

	if (n == 1)
		printf("%d",1);

	for (i = 2; i <= n; i++){
		if(n % i == 0){
			n = n / i;
			printf("%d",i);
			i--;
			if (n != 1)
				printf(" *");
				}
			}

	return 0;
}
