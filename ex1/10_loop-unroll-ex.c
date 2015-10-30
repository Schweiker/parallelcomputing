#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "combine.h"


/* Aufgabe: Führen Sie das Loop-Unrolling bei combine4 mit den Faktoren 3,4,5 durch und vergleichen Sie die Ausführungszeiten. */


void combine4(vec_ptr v, volatile data_t *dest) {

	long int length = vec_length(v);
	data_t *data = get_vec_start(v);
	data_t acc = IDENT;

	for (long i=0; i<length; i++) {
		acc = acc OP data[i];
	}
	*dest = acc;
}


void combine5b(vec_ptr v, volatile data_t *dest) {

}


int main() {


    return 0;
}
