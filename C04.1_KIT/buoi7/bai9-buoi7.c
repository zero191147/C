#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n=20000;
	while(n<=100000) {
		if(n/10000%2==0) {
			if(n/1000%2==0) {
				if(n/100%2==0) {
					if(n/10%2==0) {
						if(n%2==0) {
                            printf("%d\n", n);
                            n+=2;
						}
						else n+=1;
					}
					else n+=10;
				}
				else n+=100;
			}
			else n+=1000;
		}
		else n+=10000;
	}
	return 0;
}
