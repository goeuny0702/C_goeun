#include<stdio.h> // 기본 라이브러리
#include<stdlib.h> // 고급 라이브러리
#include<time.h> // 난수 기본값

main() {
	int com, me;

	// 난수의 초기화ㄴ
	srand(time(NULL));
	com = ( rand() % 3 ) + 1; // 1~3

	// 사용자 입력
	printf("가위 = 1 | 바위 = 2 | 보 = 3 중 숫자 하나를 선택하시오.\n");
	scanf("%d", &me);

	// 결과물 출력
	printf("나 > %d\n", me);
	printf("컴퓨터 > %d\n", com);

	// 반복문 시작
	/*if (me == com) {
		printf("당신은 비겼습니다 ♡");
	}
	else if ((me == 1 && com == 2) ||
			(me == 2 && com == 3) ||
			(me == 3 && com == 1)
		) {
		printf("당신은 졌습니다.");
	}
	else if ((me == 1 && com == 3) ||
			(me == 2 && com == 1) ||
			(me == 3 && com == 2)
		) {
		printf("당신은 이겼습니다 ♡");
	}
	else {
		printf("잘못된 입력입니다.");
	}*/

	// 강사님 답변
	if (me == 1) {
		printf("사람 : 가위\n");
		if (com == 1) {
			printf("컴퓨터 : 가위\n");
			printf("당신은 비겼습니다.\n");
		}
		else if (com == 2) {
			printf("컴퓨터 : 바위\n");
			printf("당신은 졌습니다.\n");
		}
		else {
			printf("컴퓨터 : 보\n");
			printf("당신은 이겼습니다.\n");
		}
	}
	else if (me == 2) {
		printf("사람 : 바위\n");
		if (com == 1) {
			printf("컴퓨터 : 가위\n");
			printf("당신은 이겼습니다.\n");
		}
		else if (com == 2) {
			printf("컴퓨터 : 바위\n");
			printf("당신은 비겼습니다.\n");
		}
		else {
			printf("컴퓨터 : 보\n");
			printf("당신은 졌습니다.\n");
		}
	}
	else {
		printf("사람 : 보\n");
		if (com == 1) {
			printf("컴퓨터 : 가위\n");
			printf("당신은 졌습니다.\n");
		}
		else if (com == 2) {
			printf("컴퓨터 : 바위\n");
			printf("당신은 이겼습니다.\n");
		}
		else {
			printf("컴퓨터 : 보\n");
			printf("당신은 비겼습니다.\n");
		}
	}


}