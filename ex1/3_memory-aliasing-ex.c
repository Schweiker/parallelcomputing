#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/* Aufgabe: Testen Sie das Verhalten dieser Funktionen, wenn die Speicheradressen (Argumente) unterschiedlich oder gleich sind */


/* Die Funktion tauscht die Daten zweier Speicherstellen */
void swap(int *xp, int *yp) {
    *xp = *xp + *yp;    /* x+y */
    *yp = *xp - *yp;    /* x+y-y = x */
    *xp = *xp - *yp;    /* x+y-x = y */
}


/* Die Funktion weist Speicherstellen Werte zu */
void asign(int *q, int *p, int *t) {
    int x = 1000;
    int y = 3000;

    *q = x;
    *p = y;
    *t = *q;
}


int main() {
    int x = 1;
    int y = 1;
    swap(x,y);

    return 0;
}
