#include<stdio.h> // �⺻ ���̺귯��
#include<stdlib.h> // ��� ���̺귯��
#include<time.h> // ���� �⺻��

main() {
	int com, me;

	// ������ �ʱ�ȭ
	srand(time(NULL));
	com = ( rand() % 3 ) + 1; // 1~3

	// ����� �Է�
	printf("���� = 1 | ���� = 2 | �� = 3 �� ���� �ϳ��� �����Ͻÿ�.\n");
	scanf("%d", &me);

	// ����� ���
	printf("�� > %d\n", me);
	printf("��ǻ�� > %d\n", com);

	// �ݺ��� ����
	if (me == com) {
		printf("����� �����ϴ� ��");
	}
	else if ((me == 1 && com == 2) ||
			(me == 2 && com == 3) ||
			(me == 3 && com == 1)
		) {
		printf("����� �����ϴ�.");
	}
	else if ((me == 1 && com == 3) ||
			(me == 2 && com == 1) ||
			(me == 3 && com == 2)
		) {
		printf("����� �̰���ϴ� ��");
	}
	else {
		printf("�߸��� �Է��Դϴ�.");
	}


}