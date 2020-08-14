/*
문제 6 (난이도 : 中)
다음 식을 만족하는 자연수 a,b,c 의 개수를 구하여라

  i) a + b + c = 2000
  ii) a ＞ b > c, a,b,c 는 모두 자연수
*/

#include <stdio.h>

int main()
{
	int a, b, c, n = 2000, count = 0;

	for (a = 1; a < n;a++){
		for(b = a+1; b < n; b++){
			for(c = b+1; c < n; c++){
				if (a + b + c ==10)
					count ++;
		
			}

		}
						
	}

	printf("%d",count);
	return 0;
}

