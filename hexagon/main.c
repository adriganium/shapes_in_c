

#include <stdio.h>
#include <stdlib.h>
#include  <math.h>
#include "shapeslib.h"
#define HEIGHT 27
#define WIDTH 100
#define mpx 55
#define mpy 14

char feld[HEIGHT][WIDTH];

int main() {
#pragma region feld füllen
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            feld[i][j] = '*';
        }
    }
#pragma endregion feld füllen

#pragma region mittelpunk
feld[mpy][mpx] = ' ';
#pragma endregion mittelpunk

#pragma region feld ausgeben
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            printf("%c", feld[i][j]);
        }
        printf("\n");
    }
#pragma endregion feld ausgeben

}