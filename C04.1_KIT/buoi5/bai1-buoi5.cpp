#include <stdio.h>
#include <stdlib.h>

int main() {
	int d, m, y, c;
	c=0;
	scanf("%d %d %d", &d, &m, &y);
	switch(m) {
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			c+=1;
			switch(d) {
				case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:case 13:case 14:case 15:case 16:case 17:case 18:case 19:case 20:case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:case 31: c+=1;
			}
			break;
		case 4:case 6:case 9:case 11:
			c+=1;
			switch(d) {
				case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:case 13:case 14:case 15:case 16:case 17:case 18:case 19:case 20:case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30: c+=1;
			}
			break;
		case 2:
			c+=1;
			switch(d) {
				case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:case 13:case 14:case 15:case 16:case 17:case 18:case 19:case 20:case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28: c+=1;break;
				case 29:
					switch(y%4) {
						case 0: c+=1;
					}
			}
	}
	switch(c) {
		case 2:
			switch (m) {
				case 1:case 3:case 5:case 7:case 8:case 10:case 12:
					switch(d) {
						case 31:
							d=1;
							switch(m) {
								case 12: m=1;y+=1;
							}
							break;
						default: d+=1;
					}
					break;
				case 4:case 6:case 9:case 11:
					switch(d) {
						case 30: d=1;m+=1;break;
						default: d+=1;
					}
					break;
				case 2:
					switch(y%4) {
						case 0:
							switch(d) {
								case 29:d=1;m=3;break;
								default: d+=1;
							}
							break;
						default:
							switch(d) {
								case 28:d=1;m=3;break;
								default: d+=1;
							}
					}
			}
			printf("%d/%d/%d", d, m, y);
			break;
		default: main();
	}
	return 0;
}
