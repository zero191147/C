#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	for(int i=1000; i<10000; i++) {
		if(sqrt(i)-(int)sqrt(i)==0) printf("%d ", i);
	}
	return 0;
}