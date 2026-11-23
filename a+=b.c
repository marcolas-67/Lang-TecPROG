#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	do {
		a += b;
		printf("%d", a);
	} while (a < b);
	
	return 0;
}
