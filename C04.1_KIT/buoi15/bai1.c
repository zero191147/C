#include <stdio.h>
#include <stdlib.h>

typedef struct data {
	int number;
	struct data *next;
} data;
int main() {
	data *pnode=(data*)malloc(sizeof(data)); pnode->next=NULL;
	data *first=pnode; 
	int n, i=0; char c=(char)0;
	printf("nhap data: ");
	do {
		scanf("%d%c", &n, &c);
		pnode->number=n;
		pnode->next=(data*)malloc(sizeof(data));
		pnode=pnode->next;
		pnode->next=NULL;
		i++;
	} while((int)c!=10);
	printf("data theo chieu thuan: ");
	for(pnode=first; pnode->next!=NULL; pnode=pnode->next) {
		printf("%d ", pnode->number);
	}
	printf("\ndata theo chieu nghich: ");
	n=0; int arr_data[i], m=i-1;
	for(pnode=first; pnode->next!=NULL; pnode=pnode->next) {
		arr_data[m]=pnode->number; m--;
	}
	for(m=0; m<i; m++) {
		printf("%d ", arr_data[m]);
	}
	return 0;
}
