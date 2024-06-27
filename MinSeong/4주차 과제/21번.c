#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void swap_int(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap_str(char** a, char** b) {
	char* temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int* age, char** name, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (age[j] > age[j + 1]) {
				swap_int(&age[j], &age[j + 1]);
				swap_str(&name[j], &name[j + 1]);
			}
		}
	}
}
int main(void) {
	int N;
	int* age;
	char** name;

	scanf("%d", &N);
	age = (int*)malloc(sizeof(int) * N);
	name = (char**)malloc(sizeof(char*) * N);
	for (int i = 0; i < N; i++) {
		name[i] = (char*)malloc(sizeof(char) * 101); // �̸� �ִ� ���̸� 100���� �����ϰ� �� ���ڸ� �����Ͽ� 101�� ����
	}

	for (int i = 0; i < N; i++) {
		scanf("%d %[^\n]", &age[i], name[i]); // ���̿� �̸��� �о��
	}

	bubble_sort(age, name, N); // ���̿� �̸��� ���� ����

	for (int i = 0; i < N; i++) {
		printf("%d %s\n", age[i], name[i]); // ���̿� �̸��� ���
	}
	// �޸� ����
	for (int i = 0; i < N; i++) {
		free(name[i]);
	}
	free(name);
	free(age);

	return 0;
}
