#include<stdio.h>
#include"archivos.h"
#include"procesamiento.h"
#include"defs.h"

int main() {
	float seno[muestras];
	genera_seno( seno );
	genera_datos( seno);

	return 0;
}
