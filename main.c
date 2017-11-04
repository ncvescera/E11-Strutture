#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct s_punto {
    double x;
    double y;
};
typedef struct s_punto punto;

struct s_retta {
    double m;
    double q;
};
typedef struct s_retta retta;

retta perpendicolare(retta r, punto p);

int main(int argc, char** argv) {
    retta r = {4,3};
    punto p = {-4,3};
    
    retta result = perpendicolare(r,p);
    
    printf("m: %lf\nq: %lf",result.m, result.q);
    return (EXIT_SUCCESS);
}

retta perpendicolare(retta r, punto p) {
    retta result;

    if (r.m == 0) {
        result.m = INFINITY;
        result.q = p.x;
    } else if (r.m == INFINITY) {
        result.m = 0;
        result.q = p.y;
    } else {
       result.m = -1 / r.m;
       result.q = 1 / r.m * p.x + p.y;
    }
    
    return result;
}