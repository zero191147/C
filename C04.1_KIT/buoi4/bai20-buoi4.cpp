#include <stdio.h>
#include <stdlib.h>

int main() {
	int r, c, ir, ic, g;
	scanf("%d %d", &r, &c);
	if(r%2==0) ir = r/2;
	else ir = (r+1)/2;
	if(c%2==0) ic = c/2;
	else ic = (c+1)/2;
	g = ir*ic*50000 + (r*c-ir*ic)*10000;
	printf("%d", g);
	return 0;
}
