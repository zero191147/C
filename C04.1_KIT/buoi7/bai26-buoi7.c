#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, c=1;
	scanf("%d", &n);
	printf("%d = ", n);
	while(c<=n) {
		if(c!=1 and c<n and n%c==0) {
			printf("%d x ", c); n/=c;
		}
		else if(c==n) {
			printf("%d", n); break;
		}
		else c++;
	}
	return 0;
}