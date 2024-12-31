#include<stdio.h>

main() {
	int su1, su2;
	char buho;

	printf("숫자 1 입력 >");
	scanf("%d", &su1);
	printf("부호 입력 >");
	scanf(" %c", &buho);
	printf("숫자 2 입력 >");
	scanf("%d", &su2);

	if (buho == '+') {
		printf("계산 > %d", su1 + su2);
	}
	else if (buho == '-') {
		printf("계산 > %d", su1 - su2);
	}
	else if (buho == '*') {
		printf("계산 > %d", su1 * su2);
	}
	else {
		printf("계산 > %d", su1 / su2);
	}

}