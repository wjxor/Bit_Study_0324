#include "std.h"

#define DATA_MAX 10

int g_arr[DATA_MAX];

// g_arr의 모든 값들을 -1으로 초기화
void con_init() {

	for (int i = 0; i < DATA_MAX; i++) {
		g_arr[i] = -1;
	}
	
}

/*
[변수 선언 및 사용자 입력을 통한 초기화]
저장할 위치(0~9) : 
저장할 값 : 
[연산] 전역변수의 해당 위치에 저장할 값 저장!
[결과 출력]
*/
void con_insert() {
	printf("[저장]\n\n");

	int idx, number;

	printf("저장할 위치(0~%d) : ", DATA_MAX-1);
	scanf_s("%d", &idx);

	printf("저장할 값 : ");
	scanf_s("%d", &number);

	if (g_arr[idx] == -1) {
		g_arr[idx] = number;
		printf("저장되었습니다\n");
	}
	else {
		printf("이미 저장된 위치입니다.\n");
	}

	g_arr[idx] = number;

	printf("저장되었습니다\n");
}

// g_arr의 모든 값들을 출력하고 싶다.
// 예)
// 0	1	2	3	...
// -1	-1	-1	-1	-1...
void con_printall() {
	printf("**************************************************************************************\n");
	for (int i = 0; i < DATA_MAX; i++) {
		printf("%2d\t", i);
	}
	printf("\n");

	printf("**************************************************************************************\n");
	for (int i = 0; i < DATA_MAX; i++) {
		printf("%2d\t", g_arr[i]);
	}
	printf("\n");
	printf("**************************************************************************************\n");
}

/*
* 사용자로부터 정수를 입력받는다.
* 입력된 정수가 전역배열에 저장되어 있는지 검색...
* 결과 출력
* - 저장된 인덱스 :
* - 저장된 값 : 
*/
void con_select() {
	printf("[검색]\n\n");

	int number;
	printf("찾고자 하는 정수 입력 : ");
	scanf_s("%d", &number);

	for (int i = 0; i < DATA_MAX; i++) {
		if (g_arr[i] == number) {
			printf("저장된 인덱스 : %d\n", i);
			printf("저장된 값 : %d\n", g_arr[i]);
			return;
		}
	}
	printf("없다\n");
}


// insert랑 유사하다.
// 사용자로부터 숫자를 입력받는다.
// 수정할 숫자를 입력받는다.
// 숫자가 저장된 인덱스를 검색(con_select)
// 찾으면 전역변수의 해당 인덱스에 수정할 숫자를 저장한다.
// 결과를 출력한다.
void con_update() {
	printf("[수정]\n\n");

	int find_number, update_number;

	printf("찾고자 하는 값 : ");
	scanf_s("%d", &find_number);

	printf("변경할 값 : ");
	scanf_s("%d", &update_number);

	for (int i = 0; i < DATA_MAX; i++) {
		if (g_arr[i] == find_number) {
			g_arr[i] = update_number;
			printf("변경되었습니다\n");
			return;
		}
	}
	printf("없다\n");
}

// 사용자로부터 삭제할 숫자를 입력받는다.
// 입력한 숫자를 검색한다.
// 찾으면 전역변수의 해당 인덱스의 값을 -1로 저장한다.
void con_delete() {
	printf("[삭제]\n\n");

	int find_Num;

	printf("찾고자 하는 값 : ");
	scanf_s("%d", &find_Num);

	for (int i = 0; i < DATA_MAX; i++) {
		if (g_arr[i] == find_Num) {
			g_arr[i] = -1;
			printf("삭제되었습니다\n");
			return;
		}
	}
	printf("없다\n");
}

