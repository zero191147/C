#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 99
int nhapmang(int *a, int n) {
	int number; char c;
	scanf("%d%c", &number, &c);
	if((int)c==32) {
		a[n]=number; nhapmang(a, n+1);
	}
	else if((int)c==10) {
		a[n]=number; a=(int*)realloc(a, sizeof(int)*(n+1)); return n+1;
	}
	else return 0;
}
int tongpt(int *a, int start, int end) {
	int tong=0;
	for(int i=start; i<=end; i++) {
		tong+=a[i];
	}
	return tong;
}
int main() {
	int n1=0, n2=0, max1, max2, *a1=(int*)calloc(MAX, sizeof(int)), *a2=(int*)calloc(MAX, sizeof(int));
	printf("Nhap thoi gian tung xe o dau ngo: "); n1=nhapmang(a1, n1);
	printf("Nhap thoi gian tung xe o cuoi ngo: "); n2=nhapmang(a2, n2);
	if(a1[0]>a2[n2-1]) {
		printf("Thoi gian doi: %d", tongpt(a1, 1, n1-1)+tongpt(a2, 0, n2-1));
	}
	else printf("Thoi gian doi: %d", tongpt(a1, 0, n1-1)+tongpt(a2, 0, n2-2));
	return 0;
}