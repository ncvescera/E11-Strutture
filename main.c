#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "bool.h"

struct s_punto {
    double x;
    double y;
};
typedef struct s_punto punto;

struct s_cerchio {
    punto centro;
    double ragggio;
};
typedef struct s_cerchio cerchio;

double pointDist(punto p1, punto p2);
bool isInCerchio(cerchio c, punto p);

int main(int argc, char** argv) {
    cerchio c = {
        {2,0},
        3
    };
    punto p = {3,0};
    
    printf("%d\n",isInCerchio(c,p));
    
    return (EXIT_SUCCESS);
}

double pointDist(punto p1, punto p2) {
    double dist;

    dist = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));

    return dist;
}

bool isInCerchio(cerchio c, punto p) {
    bool result;

    if (pointDist(c.centro, p) > c.ragggio)
        result = FALSE;
    else
        result = TRUE;

    return result;
}