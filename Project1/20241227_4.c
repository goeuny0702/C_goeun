#include<stdio.h>

main() {
	int x, y;
	for (x = 2; x <= 9; x++) {
		printf("***** %d\n", x, "�� *****");
		for (y = 1; y <= x; y++) {
			printf("x X y = %d\n", x * y);
		}

	}

}