#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);
    for(int q=1; q<=n; q++) {
        for(int w=1; w<=q; w++) {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1; i<=n; i++) {
		for(int w=1; w<=i; w++) {
			if(i==n) printf("* ");
			else {
				if(w==1 or w==i) printf("* ");
				else printf("  ");
			}
        }
        printf("\n");   	
    }
	return 0;
}
