#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "dimOf.h"

struct s_punto {
    double x;
    double y;
};
typedef struct s_punto punto;

double pointDist(punto p1, punto p2);
double distTot(const punto * array, int len);

int main(int argc, char** argv) {
    punto a = {4, 1};
    punto b = {2, 1};

    printf("%lf\n", pointDist(a, b));


    punto array[] = {
        {6, 3},
        {4, 3},
        {2, 3}
    };

    printf("%lf\n", distTot(array, sizeOfArray(array)));

    return (EXIT_SUCCESS);
}

double pointDist(punto p1, punto p2) {
    double dist;

    dist = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));

    return dist;
}

double distTot(const punto * array, int len) {
    double result = 0;

    int i = 0;
    do {
        result += pointDist(array[i], array[i + 1]);
        i++;
    } while (i != len - 1);

    return result;
}