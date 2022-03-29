#include "std.h"

void app_init() {
	logo();
	con_init();
}

void app_run() {
	while (1) {
		system("cls");
		con_printall();
		char idx = menuprint();
		switch (idx)
		{
		case '1':	con_insert();	break;
		case '2':	con_select();	break;
		case '3':	con_update();	break;
		case '4':	con_delete();	break;
		case '5':	return;
		default: printf("잘못 입력하셨습니다.\n");
		}

		system("pause");
	}
}

void app_exit() {
	ending();
}

void logo() {
	printf("*****************************************\n");
	printf("  우송비트 단기 55차 과정\n");
	printf("  C언어 과정\n");
	printf("  파일 분할 및 프로그램 구성\n");
	printf("  2022-03-24\n");
	printf("  ksh\n");
	printf("*****************************************\n");
	system("pause");
}

char menuprint() {
	printf("*****************************************\n");
	printf(" [1] insert[저장]\n");
	printf(" [2] select[검색]\n");
	printf(" [3] update[수정]\n");
	printf(" [4] delete[삭제]\n");
	printf(" [5] exit[프로그램 종료]\n");
	printf("*****************************************\n");

	return _getch();
}

void ending() {
	system("cls");
	printf("*****************************************\n");
	printf("프로그램을 종료합니다.\n");
	printf("*****************************************\n");
	system("pause");
}