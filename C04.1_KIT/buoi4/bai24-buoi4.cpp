#include <stdio.h>
#include <stdlib.h>

int checkday(int d, int m, int y) {
	if(m>=1 and m<=12) {
		if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
			if(d>=1 and d<=31) return 1;
			else return 0;
		}
		else if(m == 2) {
			if (d>=1 and d<=29 and y%4==0) return 1;
			else if(d>=1 and d<=28) return 1;
			else return 0;
		}
		else if(m == 4 || m == 6 || m == 9 || m == 11) {
			if(d>=1 and d<=30) return 1;
			else return 0;
		}
	}
	else return 0;
}
int ctd(int d, int m, int y) {
	int dim[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(y%4==0) dim[2]=29;
	y-=1;
	if(m==2) dim[0]=dim[1];
	else if(m==3) dim[0]=dim[1]+dim[2];
	else if(m==4) dim[0]=dim[1]+dim[2]+dim[3];
	else if(m==5) dim[0]=dim[1]+dim[2]+dim[3]+dim[4];
	else if(m==6) dim[0]=dim[1]+dim[2]+dim[3]+dim[4]+dim[5];
	else if(m==7) dim[0]=dim[1]+dim[2]+dim[3]+dim[4]+dim[5]+dim[6];
	else if(m==8) dim[0]=dim[1]+dim[2]+dim[3]+dim[4]+dim[5]+dim[6]+dim[7];
	else if(m==9) dim[0]=dim[1]+dim[2]+dim[3]+dim[4]+dim[5]+dim[6]+dim[7]+dim[8];
	else if(m==10) dim[0]=dim[1]+dim[2]+dim[3]+dim[4]+dim[5]+dim[6]+dim[7]+dim[8]+dim[9];
	else if(m==11) dim[0]=dim[1]+dim[2]+dim[3]+dim[4]+dim[5]+dim[6]+dim[7]+dim[8]+dim[9]+dim[10];
	else if(m==12) dim[0]=dim[1]+dim[2]+dim[3]+dim[4]+dim[5]+dim[6]+dim[7]+dim[8]+dim[9]+dim[10]+dim[11];
	return ((y/4)+1)*366+(y-((y/4)+1))*365+dim[0]+d;
}
int main() {
	int d1, m1, y1, d2, m2, y2, tth;
	scanf("%d %d %d", &d1, &m1, &y1);
	scanf("%d %d %d", &d2, &m2, &y2);
	if(checkday(d1, m1, y1)==1 and checkday(d1, m1, y1)==1) {
		tth = ctd(d2, m2, y2) - ctd(d1, m1, y1) + 1;
		if(tth>365) printf("Du an thuc hien trong %d ngay\nDu an khong thanh cong", tth);
		else if(tth>=250 and tth<=365) printf("Du an thuc hien trong %d ngay\nBang Dat", tth);
		else if(tth>=200 and tth<250) printf("Du an thuc hien trong %d ngay\nDat bang Kha", tth);
		else if(tth>=100 and tth<200) printf("Du an thuc hien trong %d ngay\nDat bang Gioi", tth);
		else if(tth>=0 and tth<100) printf("Du an thuc hien trong %d ngay\nDat bang Xuat sac", tth);
		else main();
	}
	else main();
	return 0;
}
