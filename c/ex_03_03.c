#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	scanf("%d", &a);
	int flag = 0;
	if (a < 0) {
		a *= -1;
		flag = 1;
	}
	c = a%10;
	b = a/10%10;
	a = a/100;
	if(flag)
		printf("-%d%d%d", c,b,a);
	else
		printf("%d%d%d", c,b,a);
	return 0;
}
