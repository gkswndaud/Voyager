/*
���� 5 (���̵� : ��)
����ڷ� ���� N ���� �Է� �ް� 1 ���� N ������ ���� ����Ѵ�.
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
