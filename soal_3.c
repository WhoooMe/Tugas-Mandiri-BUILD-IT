#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main (void) {
    char arr[300][71];
    char input[1100];
    char *kata;
    int jumlah_kata = 0;
    int duplikat = 0;

    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    kata = strtok(input, " ");
    
    while (kata != NULL) {
      duplikat = 0;
        for(int j = 0; j < jumlah_kata; j++) {
            if (strcmp(arr[j], kata) == 0) {
                duplikat = 1;
              }
    }
    if (duplikat == 0) {
      strcpy(arr[jumlah_kata], kata);
      jumlah_kata++;
    }
    kata = strtok(NULL, " ");
  }
   
    for (int i = 0; i < jumlah_kata; i++) {
    printf("%s ", arr[i]);
}

  return 0;
}