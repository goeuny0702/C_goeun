#include<stdio.h> // �⺻ ���̺귯��
#include<stdlib.h> // ��� ���̺귯��
#include<time.h> // ���� �⺻��

main() {
	int com;
	srand(time(NULL));

	com = ( rand() % 3 ) + 1;

	printf("%d", com);
}