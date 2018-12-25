#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct data {
	int number1, number2;
	struct data *next;
} data;
int main () {
	char c; int n1, n2;
	data *pnode=(data*)malloc(sizeof(data));
	pnode->next=NULL;
	data *first=pnode;
	do {
		printf("nhap data: "); scanf("%d %d", &pnode->number1, &pnode->number2);
		printf("ban co muon nhap tiep khong?y/n: \n"); c=getch();
		pnode->next=(data*)malloc(sizeof(data));
		pnode=pnode->next; pnode->next=NULL;
	} while((int)c==121);
	printf("\n");
	for(pnode=first, n1=1; pnode->next!=NULL; pnode=pnode->next, n1++) {
		printf("data thu %d: %d %d\n", n1, pnode->number1, pnode->number2);
	}
	return 0;
}
