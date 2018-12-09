#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n=1, s1=0, s2=0;
	while(n!=0) {
		scanf("%d", &n);
		if(abs(n) == n) s1+=1;
		else s2+=1; 
	}
	printf("CO %d SO DUONG \n", s1-1);
	printf("CO %d SO AM", s2);
	return 0; 
}