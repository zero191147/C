#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1, n2;
	printf("Nhap so phan tu mang 1: "); scanf("%d", &n1);
	int *a1=(int*)malloc(sizeof(n1)*n1);
	printf("Nhap mang 1: ");
	for(int i=0; i<n1; i++) {
		scanf("%d", &a1[i]);
	}
	printf("Nhap so phan tu mang 2: "); scanf("%d", &n2);
	int *a2=(int*)malloc(sizeof(n2)*n2);
	printf("Nhap mang 2: ");
	for(int i=0; i<n2; i++) {
		scanf("%d", &a2[i]);
	}
	for(int i=0; i<n2; i++) {
		for(int j=0; j<n1; j++) {
			if(a1[j]==a2[i]) j=n1;
			else if(j==n1-1) {
				n1++;
				a1=(int*)realloc(a1, sizeof(n1)*n1);
				a1[n1-1]=a2[i];
			}
		}
	}
	for(int i=0; i<n1; i++) {
		printf("%d ", a1[i]);
	}
	return 0;
}