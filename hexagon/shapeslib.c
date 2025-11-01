//
// Created by bademasta on 02.11.25.
//

#include <math.h>

double distance(int x1, int y1, int x2, int y2) {
    double distance_var = sqrt((pow(x2 - x1, 2) + pow(y2 - y1, 2)));
    return distance_var;
}
