#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 99
struct HangHoa {
	char *tenhang; int soluong; float dongia, thanhtien;
};
int main() {
	int n;
	printf("Nhap so luong mat hang: "); scanf("%d", &n);
	struct HangHoa arrhanghoa[n];
	for(int i=0; i<n; i++) {
		arrhanghoa[i].tenhang=calloc(sizeof(char), MAX);
		printf("Nhap ten hang %d: ", i+1);
		scanf("%c", &arrhanghoa[i].tenhang[0]);
		gets(arrhanghoa[i].tenhang);
		printf("Nhap so luong %d: ", i+1); scanf("%d", &arrhanghoa[i].soluong);
		printf("Nhap don gia  %d: ", i+1); scanf("%f", &arrhanghoa[i].dongia);
		arrhanghoa[i].thanhtien=arrhanghoa[i].soluong*arrhanghoa[i].dongia;
		printf("\n");
	}
	printf("%-5s%-20s%-15s%-15s%-15s\n", "STT", "Ten hang", "Don gia", "So luong", "Thanh tien");
	for(int i=0; i<n; i++) {
		printf("%-5d%-20s%-15.2f%-15d%-15.2f\n", (int)(i+1), arrhanghoa[i].tenhang, arrhanghoa[i].dongia, arrhanghoa[i].soluong, arrhanghoa[i].thanhtien);
	}
	return 0;
}
