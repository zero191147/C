#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, s;
	scanf("%d", &n);
	while(n/10>0) {
		s+=1; n/=10;
	}
	s+=1;
	printf("%d", s);
	return 0;
}