#include<stdio.h>

int main() {
  int x, y, quad;

  scanf("%d %d", &x, &y);

  if (x > 0) {
    quad = (y > 0) ? 1 : 4;
  } else {
    quad = (y > 0) ? 2 : 3;
  }

  printf("%d\n", quad);

  return 0;
}
