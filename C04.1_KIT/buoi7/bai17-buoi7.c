#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int b, t=0, i=0;
	scanf("%d", &b);
	while(b>0) {
		if(b%10==1 || b%10==0) {
			t+=(b%10)*pow(2, i);
			b/=10; i++;
		}
		else break;
	}
	printf("%d", t);
	return 0;
}