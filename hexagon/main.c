#include <stdio.h>
#include "shapeslib.h"
#include <tgmath.h>
#include <time.h>
#include <unistd.h>
#define HEIGHT 25
#define WIDTH 100
#define mpy 13
#define radius 20




char feld[HEIGHT][WIDTH];

int main() {
    int mpx = 50;


    int rotation = 0;
    int slide = 1;
    for (int c = 0; c < 360; c++) {

        if (rotation >= 360) {
            rotation = 0;
        }



        for (int i = 0; i < HEIGHT; i++) {
            for (int j = 0; j < WIDTH; j++) {
                feld[i][j] = ' ';
            }
        }



        feld[mpy][mpx] = '#';
        int px0,py0;
        for (int i = 0; i < 7; i++) {
            int px = mpx + round(cos((i * 60 * M_PI / 180) + rotation) * radius);
            int py = mpy + round(sin((i * 60 * M_PI / 180) + rotation) * radius * 0.4);
            feld[py][px] = '#';

            if (i == 0) {
                 px0 = px;
                 py0 = py;
            } else {
                line_bresenham(HEIGHT,WIDTH,feld,px0,py0,px,py);
            }
            px0 = px;
            py0 = py;
        }



        for (int i = 0; i < HEIGHT; i++) {
            for (int j = 0; j < WIDTH; j++) {
                if (feld[i][j] == '#') {
                    printf("\033[38;2;255;165;0m%c\033[0m", feld[i][j]);
                }else {
                    printf("%c", feld[i][j]);
                }
            }
            printf("\n");
        }


        rotation = rotation + 1;
        mpx += slide;
        if (mpx >= WIDTH - radius - 1 || mpx <= radius) {
            slide = -slide;
        }
        usleep(40000);
    }


    return 0;
}




