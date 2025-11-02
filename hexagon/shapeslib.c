//
// Created by bademasta on 02.11.25.
//

#include <math.h>
#include <stdlib.h>

double distance(int x1, int y1, int x2, int y2) {
    double distance_var = sqrt((pow(x2 - x1, 2) + pow(y2 - y1, 2)));
    return distance_var;
}


void line_bresenham(int Height, int Width, char feld[Height][Width], int x1, int y1, int x2, int y2) {
    float stepx, stepy;
    int dx = x2 - x1;
    int dy = y2 - y1;

    //step
    float step = fmax(abs(dx), abs(dy));
    //choosing direction
    if (step != 0) {
        stepx = dx / step;
        stepy = dy / step;
    }

    //draw pixel
    for (int i = 0; i < (step + 1); i++) {
        int drawy = (y1 + i * stepy);
        int drawx = round(x1 + i * stepx);
        feld[drawy][drawx] = '#';
    }


}