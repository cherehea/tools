#include <stdio.h>

int is_prime(int num);

int main() {
  int num;
  int max = 0;

  if (scanf("%d", &num) != 1) {
    printf("n/a");
    return 1;
  }
  if (num < 0) {
    num = -num;
  }

  for (int i = 2; i <= num; ++i) {
    if (is_prime(i)) {
      int y = num;
      while (y > 0)
        y -= i;
      if (y == 0) {
        max = i;
      }
    }
  }
  if (max > 1)
    printf("%d", max);
  else
    printf("n/a");

  return 0;
}

int is_prime(int num) {
  for (int i = 2, y = num; i < num; ++i, y = num) {
    while (y > 0)
      y -= i;
    if (y == 0)
      return 0;
  }

  return 1;
}
