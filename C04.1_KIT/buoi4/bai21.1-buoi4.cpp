#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int x1, y1, x2, y2;
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	x1 = abs(x1-x2)+1;
	y1 = abs(y1-y2)+1;
	printf("%d", x1*y1);
	return 0;
}
