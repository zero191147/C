#include <stdio.h>
#include <stdlib.h>
#define max 99
typedef struct sv {
	char name[max], code[10], sex[5];
	int year;
	struct sv *next;
} sv;
sv *first=NULL;
int main() {
	sv *pnode=(sv*)malloc(sizeof(sv)); char c;
	pnode->next=NULL; first=pnode;
	do {
		printf("ten sinh vien: "); fflush(stdin); gets(pnode->name);
		printf("nam sinh: "); scanf("%d", &pnode->year);
		printf("ma sinh vien: "); fflush(stdin); gets(pnode->code);
		printf("gioi tinh: "); fflush(stdin); gets(pnode->sex);
		printf("ban co muon nhap tiep khong?y/n: "); fflush(stdin); c=getch();
		pnode->next=(sv*)malloc(sizeof(sv)); pnode=pnode->next; pnode->next=NULL;
		printf("\n");
	} while((int)c==121);
	printf("\n%-20s|%-10s|%s|%-10s\n", "ho ten", "nam sinh", "ma sinh vien", "gioi tinh");
	for(pnode=first; pnode->next!=NULL; pnode=pnode->next) {
		printf("%-20s|%-10d|%-12s|%-10s\n", pnode->name, pnode->year, pnode->code, pnode->sex);	
	}
	return 0;
}
