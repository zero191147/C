#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	if(n==4) printf("Nhom mau: AB\nNhan duoc: O A B AB\nTruyen duoc: AB");
	else if(n==3) printf("Nhom mau: B\nNhan duoc: O B\nTruyen duoc: B AB");
	else if(n==2) printf("Nhom mau: A\nNhan duoc: O A\nTruyen duoc: A AB");
	else if(n==1) printf("Nhom mau: O\nNhan duoc: O\nTruyen duoc: O A B AB");
	else main();
	return 0;
}
