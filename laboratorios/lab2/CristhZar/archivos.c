#include<stdio.h>
#include<stdlib.h>
#include"defs.h"

void genera_datos( float datos[]) {
	FILE *archivo;
	register int n;
	
	archivo = fopen("seno.dat","w");
	if(!archivo){
		perror("ERROR ALV");
		exit(EXIT_FAILURE);
	}
	for (n = 0; n < muestras; n++) {
		fprintf(archivo, "%f \n", datos[n]);
	}
	fclose(archivo);
}
