
#include <float.h>
#include <stdio.h>
#define HEIGHT 24
#define WIDTH 71
#define schritte 35
#define Höhe


char feld[HEIGHT][WIDTH] = {{0,0}, {0,0}};


int main(void) {

#pragma region feld füllen
    for (int i = 0; i <= HEIGHT; i++) {
        for (int j = 0; j <= WIDTH; j++) {
            feld[i][j] = ' ';
        }
    }
#pragma endregion feld füllen

#pragma region dreieck zeichnen
    int mitte = WIDTH * 0.5;
    //Eine Seite
    for (int l = 0; l < schritte; l++ ) {
        feld[0 + l][mitte + (l)] = '|';
        feld[1 + l][mitte + (l)] = '*';

        feld[0 + l][mitte - (l)] = '|';
        feld[1 + l][mitte - (l)] = '*';

    }




#pragma endregion dreieck zeichnen

#pragma region feld ausgeben
    for (int i = 0; i <= HEIGHT; i++) {
        for (int j = 0; j <= WIDTH; j++) {
            printf("%c", feld[i][j]);
        }
        printf("\n");
    }

#pragma endregion feld ausgeben
    return(0);
}
