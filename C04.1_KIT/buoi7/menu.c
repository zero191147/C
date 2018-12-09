#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
/*
void bai1() {
	int n, c=0;
	printf("1. Nhap n: "); scanf("%d", &n);
	if(n==0) c+=1;
	while(n!=0) {n/=10; c+=1;}
	printf("So chu so la: %d", c);
}
void bai2() {
	int n, g=1; float s=0;
	printf("Nhap n: "); scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		for(int q=1; q<=i; q++) {g*=q;}
		s+=1/(float)(g); g=1;
	}
	printf("S = %f", s);
}
void bai3() {
	int n, c=0;
	printf("3. Nhap n: "); scanf("%d", &n);
	printf("Cac uoc so cua %d la: ", n);
	for(int i=2; i<=n/2; i++) {
		if(n%i==0) {printf("%d ", i); c+=1;}
	}
	if(c==0) printf("Khong co uoc so nao");
}
void bai4() {
	int a, b;
	printf("4. Nhap a b: "); scanf("%d %d", &a, &b);
	printf("ucln(%d, %d) = ", a, b);
	if(a>b) {a+=b; b=a-b; a-=b;}
	for(int i=a; i>0; i--) {
		if(a%i==0 && b%i==0) {printf("%d", i); break;}
		if(i==1) printf("null");
	}
}
void bai5() {
	float a, b, c, d;
	printf("5. Nhap chieu dai 3 canh: "); scanf("%f %f %f", &a, &b, &c);
	if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a) {
		d=a+b+c;
		printf("Chu vi: %.2f\n", d);
		printf("Dien tich: %.2f", sqrt((d/2)*((d/2)-a)*((d/2)-b)*((d/2)-c)));
	}
}
void menu() {
	int n;
	printf("Select: "); scanf("%d", &n);
	printf("\n");
	switch(n) {
		case 1: bai1(); break;
		case 2: bai2(); break;
		case 3: bai3(); break;
		case 4: bai4(); break;
		case 5: bai5(); break;
		case 0: exit(0); break;
		default: menu();
	}
	printf("\n\n");
	menu();
}
*/
int main() {
	/*
	printf("1. Dem so chu so\n");
	printf("2. Tinh tong\n");
	printf("3. Liet ke uoc so cua n\n");
	printf("4. Tim UCLN cua 2 so\n");
	printf("5. Tinh chu vi, dien tich hinh tam giac\n");
	printf("0. Thoat chuong trinh\n");
	menu();
	*/
	int n;
	printf("Hello World, please take a number: "); scanf("%d", &n);
	printf("%d", n);
	return 0;
}