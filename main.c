#include <stdio.h>

#define size 10


char plot[size][size];

int main() {

 for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++){
        printf("%c", plot[i][j]);
    }
     printf("\n");
  }

 return 0;
}