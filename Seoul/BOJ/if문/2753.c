#include <stdio.h>

int main() {
  int year;

  scanf("%d", &year);

  if (year % 4) {
    printf("0\n");
  } else {
    if (year % 100) {
      printf("1\n");
    } else if (!(year % 400)) {
      printf("1\n");
    } else {
      printf("0\n");
    }
  }

  return 0;
}
