/*
���� 7 (���̵� : ��߾)
������ �ڿ��� N �� �Է� �޾� N �� ���μ� ���� �� ����� ����Ͽ���. ���� �� N = 18 �� ���

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
