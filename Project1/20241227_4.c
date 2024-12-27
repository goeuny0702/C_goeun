#include<stdio.h>

main() {
	int x, y;
	for (x = 2; x <= 9; x++) {
		printf("***** %d´Ü *****\n", x);
		for (y = 1; y <= x; y++) {
			printf("%dX%d=%d\n", x, y, x * y);
		}

		printf("\n");

	}

}