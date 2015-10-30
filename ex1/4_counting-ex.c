#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/* Aufgabe: Wie oft werden folgende Funktionen aufgerufen? */


int min(int x, int y)       { return x < y ? x : y; }
int max(int x, int y)       { return x < y ? y : x; }
void incr(int *xp, int v)   { *xp += v; }
int square(int x)           { return x*x; }


int main() {

	int x = 10;
	int y = 100;
	int t;
	int counter = 0;
	for (int i=min(x,y); i<max(x,y); incr(&i,1)) {
		t += square(i);
	}

	for (int i=max(x,y)-1; i>=min(x,y); incr(&i,-1)) {
		t += square(i);
	}

	int low = min(x,y);
	int high = max(x,y);
	for (int i=low; i<high; incr(&i,1)) {
		t += square(i);
	}

    return 0;
}
