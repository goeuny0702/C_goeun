#include<stdio.h>

main() {
	int su1, su2;
	char buho;

	printf("���� 1 �Է� >");
	scanf("%d", &su1);
	printf("��ȣ �Է� >");
	scanf(" %c", &buho);
	printf("���� 2 �Է� >");
	scanf("%d", &su2);

	if (buho == '+') {
		printf("��� > %d", su1 + su2);
	}
	else if (buho == '-') {
		printf("��� > %d", su1 - su2);
	}
	else if (buho == '*') {
		printf("��� > %d", su1 * su2);
	}
	else {
		printf("��� > %d", su1 / su2);
	}

}