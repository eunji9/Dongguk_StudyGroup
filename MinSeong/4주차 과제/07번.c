#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ���׽��� �����ϴ� �Լ�
void integrate(char polynomial[]) {
    int constant = 0; // ����� ������ ����
    int x_coefficient = 0; // x ����� ������ ����

    char* term = polynomial; // ���׽��� �� ���� ����ų ������

    // �� �׿� ���� ���� ����
    while (*term != '\0') {
        // �� ���� ����� ����
        int coefficient = 0;
        if (*term == 'x') {
            coefficient = 1; // "x" ���� ����� 1�� ���
        }
        else {
            coefficient = atoi(term); // ��� ���� ��� ����
            while (*term != '\0' && *term != 'x') {
                term++; // ���� ���ڷ� �̵�
            }
        }

        // x ����� ����� ����
        if (*term == 'x') {
            x_coefficient += coefficient / 2;
        }
        else {
            constant += coefficient;
        }

        // �� �������� '+'���� �̵�
        while (*term != '\0' && *term != '+') {
            term++;
        }
        if (*term == '+') {
            term++; // '+' ���� ���ڷ� �̵�
        }
    }

    // ��� ���
    if (x_coefficient != 0)
        printf("%dxx", x_coefficient);
    if (constant != 0) {
        if (x_coefficient != 0)
            printf("+");
        printf("%dx", constant);
    }
        printf("+W"); // ���л��
}

int main() {
    char polynomial[100];
    scanf("%s", polynomial);

    integrate(polynomial);

    return 0;
}
