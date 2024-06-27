#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N, M;
    int* A;
    int* B;

    scanf("%d", &N);
    A = (int*)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    scanf("%d", &M);
    B = (int*)malloc(sizeof(int) * M);
    for (int i = 0; i < M; i++) {
        scanf("%d", &B[i]);
    }
    for (int i = 0; i < M; i++) {
        int found = 0; // B �迭�� ���� ���Ұ� A �迭�� �ִ��� ���θ� ��Ÿ���� �÷���
        for (int j = 0; j < N; j++) {
            if (B[i] == A[j]) {
                found = 1; // ã������ ǥ���ϰ�,
                break; // �ݺ��� Ż��
            }
        }
        if (i != M - 1) {
            printf("%d\n", found); // ã������ 1��, ã�� �������� 0�� ���
        }
        else {
            printf("%d", found);
        }
    }

    // �޸� ����
    free(A);
    free(B);

    return 0;
}
