#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 99

struct sinhvien {
	char hoten[MAX];
	int namsinh;
	float diemtb;
};
int main() {
	int n; struct sinhvien *danhsach=calloc(sizeof(int), MAX);
	for(int i=0; i<MAX; i++) {
		printf("Nhap ten sinh vien %d: ", i+1);
		for(int q=0; q<MAX; q++) {
			danhsach[i].hoten[q]=getchar();
			if((int)danhsach[i].hoten[q]==10) break;
		}
        if(danhsach[i].hoten[0]==' ') {
			n=i+1; danhsach=realloc(danhsach, sizeof(int)*n);
			break;
		}
		printf("Nhap nam sinh sinh vien %d: ", i+1); scanf("%d", &danhsach[i].namsinh);
		printf("Nhap diem trung binh sinh vien %d: ", i+1); scanf("%f", &danhsach[i].diemtb);
	}
	printf("%s%10s%20s%30s\n", "STT", "Ho ten", "Tuoi", "Diem trung binh");
	for(int i=0; i<n; i++) {
		printf("%d%10s%20d%30f\n", i+1, danhsach[i].hoten, 2018-danhsach[i].namsinh, danhsach[i].diemtb);
	}
	return 0;
}
