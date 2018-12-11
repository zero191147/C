#include <stdio.h>
#include <stdlib.h>
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
int main() {
	int n=0, n1=0, check=0, *a=(int*)calloc(MAX, sizeof(int));
	printf("Nhap mang a: "); n=nhapmang(a, n);
	for(int i=0, q=0; i<n-1 && q<n-1; i++, q++) {
		while(a[q+1]-a[q]==0) {q++;}
		a[i]=a[q+1]-a[q]; n1++;
	}
	for(int i=0; i<n1-1; i++) {
		a[i+1]*a[i]<0?check++:check=check;
	}
	check==1?printf("YES"):printf("NO");
	return 0;
}