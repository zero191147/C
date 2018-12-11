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
void sapxepmang(int *a, int n) {
	int check=0;
	for(int i=0; i<n-1; i++) {
		if(a[i]>a[i+1]) {
			a[i]+=a[i+1];
			a[i+1]=a[i]-a[i+1];
			a[i]-=a[i+1];
			check++;
		}
		if(i==n-2 && check!=0) {
			i=-1; check=0;
		}
	}
}
int main() {
	int n1=0, n2=0, *a1=(int*)calloc(MAX, sizeof(int)), *a2=(int*)calloc(MAX, sizeof(int));
	printf("Nhap mang a1: "); n1=nhapmang(a1, n1);
	printf("Nhap mang a2: "); n2=nhapmang(a2, n2);
	sapxepmang(a1, n1); sapxepmang(a2, n2);
	for(int i=0; i<n1; i++) {
		for(int q=0; q<n2; q++) {
			if(a1[i]==a2[q]) break;
			if(q==n2-1) printf("%d ", a1[i]);
		}
	}
	return 0;
}