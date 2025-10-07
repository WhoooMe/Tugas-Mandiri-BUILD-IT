#include <stdio.h>

int main (void) {
    int N, bil, max, count;
    double percent, total;
    int days[31];

    scanf (" %d", &N);

    scanf (" %d", &bil);
    max = bil;
    count = 1;
    days[0] = 1;
    total = bil;

    for (int i = 2; i <= N; i++) {
        scanf (" %d", &bil);

        total = total + bil;

        if (bil > max) {
            max = bil;
            count = 1;
            days[count-1]= i; 
        } else if (bil == max) {
            count++;
            days[count-1] = i;
        } 
    } 
    percent = (max * count) / total * 100;
        printf ("Max : %d\n", max);
        printf ("Count : %d\n", count);
        printf ("days : ");
        for (int j = 0; j < count; j++){
            printf (" %d", days[j]);
        }
        printf("\nPercentage : %.3f%%", percent);

    return 0;
}