#include<stdio.h> // 기본 라이브러리
#include<stdlib.h> // 고급 라이브러리
#include<time.h> // 난수 기본값

main() {
	int com;
	srand(time(NULL));

	com = ( rand() % 3 ) + 1;

	printf("%d", com);
}