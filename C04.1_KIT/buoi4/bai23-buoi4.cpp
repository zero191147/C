#include <stdio.h>
#include <stdlib.h>

int main() {
	float l;
	scanf("%f", &l);
	if(l<10000000) l*=0.95;
	else l*=0.9;
	if((l*0.3)<3000000) l-=3000000;
	else l*=0.7;
	if(l<=0) printf("Khong the");
	else {
		l=20000000/l;
		if(l-(int)l>0) l+=1;
		printf("%d", (int)l);
	}
	return 0;
}
