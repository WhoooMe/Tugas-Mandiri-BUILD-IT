#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main (void) {
    int n, i = 1, d, j = 1, g;

    scanf(" %d", &n);

    do {
      j = 1;
      while (j <= n - i - 1) {
        printf(" ");
        j++;
      }
      g = 1;
      while (g <= 2 * i - 1) {
          printf("*");
          g++;
      }
      printf("\n");
      d = n - 1;
      i++;
    } while (i <= n - 1);

    d = 1;
    while (d < n - 1) {
      printf(" ");
      d++;
    }
    printf("*\n");
  return 0;
}
