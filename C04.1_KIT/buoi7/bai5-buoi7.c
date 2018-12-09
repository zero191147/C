#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, s1=0, s2=1;
	float s3=0;
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		s1+=i; s2*=i; s3+=1/(float)s2;
	}
	printf("Tong 1 -> n: %d\n", s1);
	printf("n!         : %d\n", s2);
	printf("Tong S     : %.2f", s3);
	return 0;
}