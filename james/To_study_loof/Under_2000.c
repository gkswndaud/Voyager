/*
���� 6 (���̵� : ��)
���� ���� �����ϴ� �ڿ��� a,b,c �� ������ ���Ͽ���

  i) a + b + c = 2000
  ii) a �� b > c, a,b,c �� ��� �ڿ���
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

