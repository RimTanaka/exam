#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
	double r;
	scanf("%lf", &r);
	double V = (4./3.) * M_PI * pow(r, 3);
	double m = 21500. * V;
	printf("%.lf", round(m));
	return 0;
}
