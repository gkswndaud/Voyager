/*
문제 7 에서 만든 프로그램의 속도를 향상 시킬 수 있는 방법은 없을까? 
큰 수를 빠르게 소인수분해 할 수 있는 방법들을 찾아 프로그램에 적용시켜 보아라.
예를 들어서 N 의 제곱근 이하의 정수들만 처리한다던지, 
Lucas- Lehmer 판정법을 이용해 소수인지 아닌지 판정한다던지 등등..

Lucas-Lehmer법은 오류가 있다하여 바빌로니아법사용해서 제곱근 구함
*/

#include <stdio.h>

//바빌로니아 법을 이용하여 SQRT 구현

double SQRT(double a, double x){

	for(int i = 0; i < 20; i++)
		x = (x + (a/x))/2;

	return x;
}
//x는 0~a 사이에 존재하는 임의의 값


int main()
{
	int n,i,j;
	double sqrt_n, x = 1.0;

	scanf("%d",&n);

	printf("%d = ",n);

	if(n == 1){
		printf("%d",1);
		return 0;
	}

	sqrt_n = SQRT((double)n,x);

	for(i = 2; i <= sqrt_n ;i++){
		
		if(n % i == 0){
			n = n/i;
			printf("%d",i);
			i--;
			if (n != 1)
				printf(" *");
		       }
	
	}
	if(i > sqrt_n)
		printf("%d",n);

	return 0;

}
