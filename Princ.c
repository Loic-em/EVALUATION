#include <stdio.h>
#include "Pi.h"

float calculerSurface(float rayon);
float calculerCirconference(float rayon);

int main() {
	float rayon;
	printf("Entrez le rayon : ");
	scanf("%1f", &rayon);

	printf("la circonference du cercle est :%.2f\n", calculerCirconference(rayon));
	printf("la surface du cercle est :%.2f\n" , calculerSurface(rayon));
	

	return 0;

}
