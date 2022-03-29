#include "std.h"

#define DATA_MAX 10

int g_arr[DATA_MAX];

// g_arr�� ��� ������ -1���� �ʱ�ȭ
void con_init() {

	for (int i = 0; i < DATA_MAX; i++) {
		g_arr[i] = -1;
	}
	
}

/*
[���� ���� �� ����� �Է��� ���� �ʱ�ȭ]
������ ��ġ(0~9) : 
������ �� : 
[����] ���������� �ش� ��ġ�� ������ �� ����!
[��� ���]
*/
void con_insert() {
	printf("[����]\n\n");

	int idx, number;

	printf("������ ��ġ(0~%d) : ", DATA_MAX-1);
	scanf_s("%d", &idx);

	printf("������ �� : ");
	scanf_s("%d", &number);

	if (g_arr[idx] == -1) {
		g_arr[idx] = number;
		printf("����Ǿ����ϴ�\n");
	}
	else {
		printf("�̹� ����� ��ġ�Դϴ�.\n");
	}

	g_arr[idx] = number;

	printf("����Ǿ����ϴ�\n");
}

// g_arr�� ��� ������ ����ϰ� �ʹ�.
// ��)
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
* ����ڷκ��� ������ �Է¹޴´�.
* �Էµ� ������ �����迭�� ����Ǿ� �ִ��� �˻�...
* ��� ���
* - ����� �ε��� :
* - ����� �� : 
*/
void con_select() {
	printf("[�˻�]\n\n");

	int number;
	printf("ã���� �ϴ� ���� �Է� : ");
	scanf_s("%d", &number);

	for (int i = 0; i < DATA_MAX; i++) {
		if (g_arr[i] == number) {
			printf("����� �ε��� : %d\n", i);
			printf("����� �� : %d\n", g_arr[i]);
			return;
		}
	}
	printf("����\n");
}


// insert�� �����ϴ�.
// ����ڷκ��� ���ڸ� �Է¹޴´�.
// ������ ���ڸ� �Է¹޴´�.
// ���ڰ� ����� �ε����� �˻�(con_select)
// ã���� ���������� �ش� �ε����� ������ ���ڸ� �����Ѵ�.
// ����� ����Ѵ�.
void con_update() {
	printf("[����]\n\n");

	int find_number, update_number;

	printf("ã���� �ϴ� �� : ");
	scanf_s("%d", &find_number);

	printf("������ �� : ");
	scanf_s("%d", &update_number);

	for (int i = 0; i < DATA_MAX; i++) {
		if (g_arr[i] == find_number) {
			g_arr[i] = update_number;
			printf("����Ǿ����ϴ�\n");
			return;
		}
	}
	printf("����\n");
}

// ����ڷκ��� ������ ���ڸ� �Է¹޴´�.
// �Է��� ���ڸ� �˻��Ѵ�.
// ã���� ���������� �ش� �ε����� ���� -1�� �����Ѵ�.
void con_delete() {
	printf("[����]\n\n");

	int find_Num;

	printf("ã���� �ϴ� �� : ");
	scanf_s("%d", &find_Num);

	for (int i = 0; i < DATA_MAX; i++) {
		if (g_arr[i] == find_Num) {
			g_arr[i] = -1;
			printf("�����Ǿ����ϴ�\n");
			return;
		}
	}
	printf("����\n");
}

