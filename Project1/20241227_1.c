#include<stdio.h>

main() {
	printf("%d\n", 4 > 7); // ���� = 0
	printf("%d\n", 4 < 7); // �� = 1

	int answer = 4 < 7; // = 1
	printf("%d\n", answer); // 1
	printf("%d\n", answer + 1); // 2
	printf("%d\n", answer == 1); // 1

}