#include <stdio.h>
int main() {
	int a, i, j = 1, x = 0;

	for(i = 1; i <= 10; i++) {
		while(x < 8) {
			printf("%d ",j++);
			x++;
		}
		x = 0;
		printf("\t");
	}
	
	return 0;
}