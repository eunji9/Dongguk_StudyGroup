/*
# ����
2���� ���迡 ����� �׿��ִ�. �� ���� ��� ���̿� ������ ���δ�.
��� ����� ���� �´�. ���̴� ������ �ѷ��� ���ϱ�?

# �Է�
ù ��° �ٿ��� 2���� ������ ���� ���� H�� 2���� ������ ���� ���� W�� �־�����. (1 �� H, W �� 500)
�� ��° �ٿ��� ����� ���� ���̸� �ǹ��ϴ� 0�̻� H������ ������ 2���� ������ �� ���� ��ġ���� ���ʴ�� W�� �־�����.
���� ��� ������ �� ������ ���� �� ����. �� 2���� ������ �ٴ��� �׻� �����ִٰ� �����Ͽ��� ����.

#���
2���� ���迡���� �� ĭ�� �뷮�� 1�̴�. ���̴� ������ �ѷ��� ����Ͽ���.
������ ���� ������ ���� ��� 0�� ����Ͽ���.
*/

/*
1) H�� W�Է� �ޱ�
2) w���� ���ڸ� �迭�� �Է¹ޱ�
3) �Լ� ���� (�����ϸ�ȵ�. ���� ������ leftMax�� rightMaxã�ƾ� �ҵ�)
	int left[i-1] = int heights[i] 
	int right[i+1] = int heights[i]
4) if�� �ۼ��ϱ�
	if( left[i-1] >= right[i] ) -> left[i-1] - heights[i] = waterAmount[i]
	else -> right[i+1] - heights[i] = waterAmount[i]
5) �� ���ϱ�
	for (int i=0; i<W; i++)
	totalWaterAmount += waterAmount[i]
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int H = 1;
	int W = 0;
	scanf("%d %d", &H, &W);

	int heights[500] = { 1 };
	int waterAmount[500] = { 1 };

	for (int i = 0; i < W; i++) {
		scanf("%d", &heights[i]);
		waterAmount[i] = 0; //������Ҵ� �迭�̴��� { } ���� �ȵǰ� �׳� 0 �־ �ʱ�ȭ�ϱ�
	}

	int totalWaterAmount = 0;

	for (int i = 1; i < W-1; i++) {
		int leftMax = 0;
		int rightMax = 0;

		for (int j = 0; j < i; j++) {
			if (heights[j] > leftMax) {
				leftMax = heights[j];
			}
		}

		for (int j = i + 1; j < W; j++) {
			if (heights[j] > rightMax) {
				rightMax = heights[j];
			}
		}

		int minHeight = leftMax > rightMax ? rightMax : leftMax;
		if (minHeight > heights[i]) {
			waterAmount[i] = minHeight - heights[i];
		}
		else {
			waterAmount[i] = 0;
		}

		totalWaterAmount += waterAmount[i];
	}

	printf("%d\n", totalWaterAmount);

	return 0;
}