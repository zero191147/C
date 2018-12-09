#include <stdio.h>
#include <stdlib.h>

int main() {
	int n[5];
	scanf("%d %d %d %d %d", &n[0], &n[1], &n[2], &n[3], &n[4]);
	if (n[0]%2==0) printf("Trong Thuy di duoc 10km va khong duoi kip My Chau");
	else if(n[1]%2==0) printf("Trong Thuy di duoc 20km va khong duoi kip My Chau");
	else if(n[1]%2==0) printf("Trong Thuy di duoc 30km va khong duoi kip My Chau");
	else if(n[1]%2==0) printf("Trong Thuy di duoc 40km va khong duoi kip My Chau");
	else if(n[1]%2==0) printf("Trong Thuy di duoc 50km va duoi kip My Chau");
	return 0;
}
