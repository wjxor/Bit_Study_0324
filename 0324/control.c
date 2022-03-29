#include "std.h"

#define DATA_MAX 10

int g_id[DATA_MAX];
char g_name[DATA_MAX][20];
char g_phone[DATA_MAX][20];

// g_id�� ��� ������ -1���� �ʱ�ȭ
// g_name�� g_phone�� ��� ���ڿ��� "" �ʱ�ȭ
void con_init() {

	for (int i = 0; i < DATA_MAX; i++) {
		g_id[i] = -1;
		strcpy_s(g_name[i], sizeof(g_name[i]), "-");
		strcpy_s(g_phone[i], sizeof(g_phone[i]), "-");
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

	int idx, id;
	char name[20], phone[20];

	printf("������ ��ġ(0~%d) : ", DATA_MAX-1);
	scanf_s("%d", &idx);

	printf("���̵� : ");
	scanf_s("%d", &id);

	char dummy = getchar();

	printf("�̸� : ");
	gets_s(name, sizeof(name));

	printf("��ȭ��ȣ : ");
	gets_s(phone, sizeof(phone));

	if (g_id[idx] == -1) {
		g_id[idx] = id;
		strcpy_s(g_name[idx], sizeof(g_name[idx]), name);
		strcpy_s(g_phone[idx], sizeof(g_phone[idx]), phone);
		printf("����Ǿ����ϴ�\n");
	}
	else {
		printf("�̹� ����� ��ġ�Դϴ�.\n");
	}
}

//���������� ��� ���� ���
// ��)
//	[0] id name phone
//	[1] id name phone
//	[2] id name phone
//	[3] id name phone
void con_printall() {
	printf("**************************************************************************************\n");
	
	for (int i = 0; i < DATA_MAX; i++) {
		printf("[%2d] %4d %8s %10s\n", i, 
			g_id[i], g_name[i], g_phone[i]);
	}
	
	printf("**************************************************************************************\n");
}

/*
* ����ڷκ��� ������ �Է¹޴´�.
* �Էµ� ������ �����迭�� ����Ǿ� �ִ��� �˻�...[�����˻�]
* ��� ���
* - ����� �ε��� :
* - ����� �� : 
*/
void con_select() {
	printf("[�˻�]\n\n");

	int id;
	printf("ã���� �ϴ� ���� �Է� : ");
	scanf_s("%d", &id);

	for (int i = 0; i < DATA_MAX; i++) {
		if (g_id[i] == id) {
			printf("����� �ε��� : %d\n", i);
			printf("���̵� : %d\n", g_id[i]);
			printf("�̸� : %s\n", g_name[i]);
			printf("��ȭ��ȣ : %s\n", g_phone[i]);
			return;
		}
	}
	printf("����\n");
}

// ����ڷκ��� ���̵�� ��ȭ��ȣ�� �Է¹޴´�.
// ���ڰ� ����� �ε����� �˻�(con_select)
// ã���� ���������� �ش� �ε����� ������ ���ڸ� �����Ѵ�.

// ����� ����Ѵ�.
void con_update() {
	printf("[����]\n\n");

	int find_id;
	char phone[20];

	printf("ã���� �ϴ� ���̵� : ");
	scanf_s("%d", &find_id);

	char dummy = getchar();

	printf("������ ��ȭ��ȣ : ");
	gets_s(phone, sizeof(phone));

	for (int i = 0; i < DATA_MAX; i++) {
		if (g_id[i] == find_id) {
			strcpy_s(g_phone[i], sizeof(g_phone), phone);
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

	int del_id;

	printf("ã���� �ϴ� �� : ");
	scanf_s("%d", &del_id);

	for (int i = 0; i < DATA_MAX; i++) {
		if (g_id[i] == del_id) {
			g_id[i] = -1;
			strcpy_s(g_name[i], sizeof(g_name[i]), "-");
			strcpy_s(g_phone[i], sizeof(g_phone[i]), "-");
			
			printf("�����Ǿ����ϴ�\n");
			return;
		}
	}
	printf("����\n");
}

