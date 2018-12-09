#include <stdio.h>
#include <stdlib.h>

int main() {
	int d, m, nm, dem;
	scanf("%d %d %d", &d, &m, &nm);
	if((d<=7) && (d>=2) && (m>=1) && (m<=12) && (nm>=28) && (nm <=31)) {
		printf("Thang %d\n", m);
		printf("Thu Hai   Thu Ba    Thu Tu    Thu Nam   Thu Sau   Thu Bay   Chu Nhat  \n");
		dem=1;
		for(int i=1; i<=7; i++) {
			for(int q=1; q<=7; q++) {
				if(i==1) {
					if(q<d-1) printf("          ");
					else {
						printf("%d         ", dem);
						dem++;
					}
				}
				else if(dem>nm) break;
				else {
					if(dem<10) printf("%d         ", dem);
					else printf("%d        ", dem);
					dem++;
				}
			}
			printf("\n");
		}
	}
	return 0;
}
