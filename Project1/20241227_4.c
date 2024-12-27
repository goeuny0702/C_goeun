#include<stdio.h>

main() {
	int x, y;


	for (x = 1; x <= 9; x++) {
		/*printf("***** %d´Ü *****\n", x);*/
		for (y = 2; y <= 9; y++) {
			printf("%d X %d = %2d ", y, x, x * y);
		}

		printf("\n");

	}

}