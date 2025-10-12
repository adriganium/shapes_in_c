#include <stdio.h>
#define size 20

int ratio = 3;

int faktor = 0;
//int faktor1 = 0;
//int faktor2 = 0;

char plot[size][size];
void quadratezeichenn( int faktor, char plot[][size]);

int main() {

#pragma region plot füllen
    for (int i = 0; i < size ; i++) {
        for (int j = 0; j < size; j++) {
            plot[i][j] = ' ';
        }
    }
#pragma  endregion plot füllen
#pragma region quadrate zeichnen

    for (int i = 0 ; i <= faktor ; i++) {
        quadratezeichenn(faktor, plot);
        faktor = faktor - 2;

    }

#pragma endregion quadrate zeichnen
#pragma region plot ausgeben
 for (int i = 0; i < size; i++) {
     printf("\n");
     for (int j = 0; j < size; j++){
         for (int f = 0; f < ratio; f++) {
             printf("%c", plot[i][j]);

        }
    }
  }
#pragma endregion plot ausgeben

 return 0;
}

void quadratezeichenn( int faktor, char plot[][size]) {

    for (int i = 0; i < size ; i++) {
        for (int j = 0; j < size; j++) {
            if (i == (0 + faktor) || j == (0 + faktor) ) {
                plot[i][j] = '0';
            }
        }
    }

     for (int i = 0; i < size ; i++){
            for (int j = 0; j < size; j++) {
                if (i == (size - (1 + faktor)) || j == (size - (1 + faktor)) ){
                    plot[i][j] = '0';

                }
            }
        }

    for (int i = 0; i < (size ) ; i++) {
        for (int j = 0; j < (size ); j++) {
            if (j >= (size - ( faktor))) {
                plot[i][j] = ' ';

            }
            if (i >= (size - ( faktor))) {
                plot[i][j] = ' ';

            }

            if (i < faktor) {
                plot[i][j] = ' ';

            }
            if (j < faktor) {
                plot[i][j] = ' ';

            }




        }
    }

}
