#include <stdio.h>

int main() {
  int a, b;
  int b_0, b_1, b_2;

  scanf("%d %d", &a, &b);

  b_0 = b % 10;
  b_1 = (b % 100) / 10;
  b_2 = b / 100;

  printf("%d\n", a * b_0);
  printf("%d\n", a * b_1);
  printf("%d\n", a * b_2);
  printf("%d\n", a * b);

  return 0;
}
