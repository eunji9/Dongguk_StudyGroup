#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char words[5][16] = { 0 }; // �ټ� ���� �ܾ�, �ִ� ���� 15, �� ���ڸ� �����Ͽ� 16
    int max_length = 0;

    // �ټ� ���� �ܾ �Է¹޽��ϴ�.
    for (int i = 0; i < 5; i++) {
        scanf("%s", words[i]);
        int length = strlen(words[i]);
        if (length > max_length) {
            max_length = length;
        }
    }

    // ���η� �о ����մϴ�.
    for (int col = 0; col < max_length; col++) {
        for (int row = 0; row < 5; row++) {
            if (col < strlen(words[row])) {
                printf("%c", words[row][col]);
            }
        }
    }
    printf("\n");

    return 0;
}
