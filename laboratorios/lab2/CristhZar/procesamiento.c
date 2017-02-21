#include<stdio.h>
#include<math.h>
#include"procesamiento.h"
#include"defs.h"

void genera_seno(float seno[] ) {
	float f = 1000, fs = 15000;
	register int n;

	for( n = 0; n < muestras; n++ ){
		seno[n] = sinf(2*n*M_PI*f/fs);
	}
}
