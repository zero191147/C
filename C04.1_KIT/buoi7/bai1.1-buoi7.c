#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++) {
		if(i%2==1) printf("+");
		else printf("-");
	}
	return 0;
}