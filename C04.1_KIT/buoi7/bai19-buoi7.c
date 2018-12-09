#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		for(int q=1; q<=n; q++) {
			if(i==1||i==n) printf("* ");
			else {
				if(q==1||q==n||q==i||q==n-i+1) printf("* ");
				else printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}