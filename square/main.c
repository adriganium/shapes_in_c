#include <stdio.h>

#define size 10


int ratio = 2;
char plot[size][size];


int main() {

    for (int i = 0; i < size ; i++) {
        for (int j = 0; j < size; j++) {
            plot[i][j] = ' ';
        }

    }


    for (int i = 0; i < size ; i++) {
        for (int j = 0; j < size; j++) {
            if (i == 0 || j == 0 ) {
                plot[i][j] = '0';
            }
        }
    }
    for (int i = 0; i < size ; i++) {
        for (int j = 0; j < size; j++) {
            if (i == (size - 1) || j == (size - 1) ){
                plot[i][j] = '0';
            }
        }
    }


 for (int i = 0; i < size; i++) {
     printf("\n");
     for (int j = 0; j < size; j++){
         for (int f = 0; f < ratio; f++) {
             printf("%c", plot[i][j]);
        }
    }
  }

 return 0;
}