#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int H, W;
	int* num;
	int** arr;

	scanf("%d%d", &H, &W);
	num = (int*)malloc(sizeof(int) * W);
	arr = (int**)malloc(sizeof(int*) * H);
	for (int i = 0; i < H; i++) {
		arr[i] = (int*)malloc(sizeof(int) * W);
	}

	for (int i = 0; i < W; ++i) {
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			arr[i][j] = 0;
		}
	}

	// �� ���� �ִ� ���̸� ������ �迭
	int* max_height = (int*)malloc(sizeof(int) * W);
	for (int i = 0; i < W; ++i) {
		max_height[i] = 0;
	}

	// �� ���� �ִ� ���� ���
	for (int i = 0; i < W; ++i) {
		for (int j = 0; j < num[i]; ++j) {
			if (j + 1 > max_height[i]) {
				max_height[i] = j + 1;
			}
		}
	}

	// ������ ���̴� �κ� ǥ��
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			if (H - i <= max_height[j]) {
				arr[i][j] = 1;
			}
		}
	}
	int total_water = 0;
	for (int i = 0; i < W; ++i) {
		// ���ʿ��� ���� ���� ����� ���� ã��
		int left_max = 0;
		for (int j = 0; j < i; ++j) {
			if (num[j] > left_max) {
				left_max = num[j];
			}
		}

		// �����ʿ��� ���� ���� ����� ���� ã��
		int right_max = 0;
		for (int j = i + 1; j < W; ++j) {
			if (num[j] > right_max) {
				right_max = num[j];
			}
		}

		// ���� ������ ���� ���� �� ����Ͽ� total_water�� ���ϱ�
		int min_height = (left_max < right_max) ? left_max : right_max;
		if (min_height > num[i]) {
			total_water += min_height - num[i];
		}
	}

	printf("%d\n", total_water);

	/*
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	*/

	free(num);
	for (int i = 0; i < H; i++) {
		free(arr[i]);
	}
	free(arr);
}