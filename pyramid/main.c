#include <stdio.h>
#define HEIGHT 15
#define WIDTH 72
#define verschiebung 7
#define versenkung 2

char feld[HEIGHT][WIDTH] = {};


int main(void) {

#pragma region feld füllen
    for (int i = 0; i <= HEIGHT; i++) {
        for (int j = 0; j <= WIDTH; j++) {
            feld[i][j] = ' ';
        }
    }

#pragma endregion feld füllen

#pragma region dreieck zeichnen
    int mitte = (WIDTH * 0.5) + verschiebung;
    int schritte = WIDTH * 0.5 - 1;

    // Boden
    for (int i = 0; i <= HEIGHT; i++) {
        for (int j = 0; j <= WIDTH; j++) {
            if (i == HEIGHT) {
                feld[i][j] = '_';
            }
        }
    }

    // Pyramide
    for (int l = 0; l < (schritte - versenkung); l++ ) {
        feld[0 + l + versenkung][mitte + (l)] = '|';
        feld[1 + l + versenkung][mitte + (l)] = '>';

        feld[0 + l + versenkung][mitte - (l)] = '|';
        feld[1 + l + versenkung][mitte - (l)] = '<';

        if (l > 0) {
            for (int p = 1; p < l + 1; p++) {
                feld[1 + l + versenkung][(mitte) -(l )+(p)] = '-';
                feld[1 + l + versenkung][(mitte) +(l )- (p)] = '-';
            }
        }


    }






#pragma endregion dreieck zeichnen

#pragma region feld ausgeben
    for (int i = 0; i <= HEIGHT; i++) {
        for (int j = 0; j <= WIDTH; j++) {

            if (feld[i][j] == '_') {
                printf("\033[1;33m%c\033[0m", feld[i][j]);
            } else {
                printf("%c", feld[i][j]);
            }

        }
        printf("\n");
    }

#pragma endregion feld ausgeben
    return(0);
}
