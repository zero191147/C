#include <stdio.h>
#include <stdlib.h>

int main() {
	float d1, d2, d3, dtb;
	scanf("%f %f %f", &d1, &d2, &d3);
	dtb = (0.1*d1) + (0.2*d2) + (0.7*d3);
	if(dtb<5) printf("Dat %.2f diem, xep loai F", dtb);
	else if(dtb>=5 and dtb<6) printf("Dat %.2f diem, xep loai D", dtb);
	else if(dtb>=6 and dtb<7) printf("Dat %.2f diem, xep loai C", dtb);
	else if(dtb>=7 and dtb<8.5) printf("Dat %.2f diem, xep loai B", dtb);
	else if(dtb>=8.5) printf("Dat %.2f diem, xep loai A", dtb);
	return 0;
}
