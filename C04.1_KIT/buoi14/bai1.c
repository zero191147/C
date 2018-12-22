#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Date {
	int day, month, year;
};
int kiemtra(int day, int month, int year) {
	int months[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	year%4==0?months[1]+=1:months[1];
	if (month>0 && month<13 && day>0 && day<months[month-1]) return 1; else return 0;
}
double tinh(int day1, int month1, int year1, int day2, int month2, int year2) {
	int months[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, daymonth1=0, daymonth2=0;
	for(int i=0; i<12; i++) {
		if(i<month1) daymonth1+=months[i];
		if(i<month2) daymonth2+=months[i];
	}
	if(month1>2 && year1%4==0) daymonth1++;
	if(month2>2 && year2%4==0) daymonth2++;
	return abs((abs(year1)*365+(abs(year1)-1)/4+1+daymonth1+day1)*(abs(year1)/year1)-(abs(year2)*365+(abs(year2)-1)/4+1+daymonth2+day2)*(abs(year2)/year2));
}
int main() {
	struct Date ngay1; struct Date ngay2;
	ngay1.day=0; ngay1.month=0; ngay1.year=0; ngay2.day=0; ngay2.month=0; ngay2.year=0;
	printf("Nhap dd mm yyyy 1: "); scanf("%d %d %d", &ngay1.day, &ngay1.month, &ngay1.year);
	printf("Nhap dd mm yyyy 2: "); scanf("%d %d %d", &ngay2.day, &ngay2.month, &ngay2.year);
	if(kiemtra(ngay1.day, ngay1.month, ngay1.year) && kiemtra(ngay2.day, ngay2.month, ngay2.year)) printf("Ket qua: %f", tinh(ngay1.day, ngay1.month, ngay1.year, ngay2.day, ngay2.month, ngay2.year));
	return 0;
}