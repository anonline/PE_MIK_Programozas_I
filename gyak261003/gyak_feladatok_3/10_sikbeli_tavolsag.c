/*
 * 10. Síkbeli távolság
 * Készíts egy programot C nyelven, amelyik:
 * - Bekér két síkbeli pontot (a síkbeli pontok 2-2 lebegőpontos értékből állnak, x és y pozíció),
 * - Kiírja, hogy a két pont távolsága kevesebb-e, mint 10.
 */

#include <stdio.h>
#include <math.h>

typedef struct PontType {
    float x;
    float y;
} Pont;

Pont pont_letrehoz(float x, float y) {
    Pont p;
    p.x = x;
    p.y = y;
    return p;
}

double tavolsag(Pont p1, Pont p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    Pont p1, p2;
    p1 = pont_letrehoz(0, 0);
    p2 = pont_letrehoz(0, 0);

    double dist = tavolsag(p1, p2);
    
    if (dist < 10) {
        printf("A két pont távolsága kevesebb, mint 10.\n");
    } else {
        printf("A két pont távolsága nem kevesebb, mint 10.\n");
    }

    return 0;
}
