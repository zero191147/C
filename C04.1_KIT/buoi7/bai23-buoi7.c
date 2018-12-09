#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, n1=1, n0=0, ntmp;
	scanf("%d", &n);
	while(n1<=n) {
		printf("%d ", n1);
		ntmp=n1+n0; n0=n1; n1=ntmp;
	}
}