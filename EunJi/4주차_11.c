/*
# ����
���� ����Ʈ�ε��� �� ������ ���̰� 3, 4, 5�� �ﰢ���� ���� �ﰢ���ΰ��� �˾Ƴ´�. �־��� ������ ���̷� �ﰢ���� �������� �ƴ��� �����Ͻÿ�.

# �Է�
�Է��� �������� �׽�Ʈ���̽��� �־����� �������ٿ��� 0 0 0�� �Էµȴ�. �� �׽�Ʈ���̽��� ��� 30,000���� ���� ���� ������ �־�����, �� �Է��� ���� ���̸� �ǹ��Ѵ�.

# ���
�� �Է¿� ���� ���� �ﰢ���� �´ٸ� "right", �ƴ϶�� "wrong"�� ����Ѵ�.
*/

/*
1) �� �� �Է¹ޱ�
2) �� ���� ������������ ���� (�̰� �޴� �迭�� �ϳ� �����ؾ��� ��)
3) ������������ ������ ���¿��� Max Middle Min ���� ���� ����
4) if(Max^2==Middle^2+Min^2) -> right // else->wrong ��� 
*/

//###�ٵ�... �̰� �ڵ带 �ʹ� ��� § �� ���� �Ф���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c = 0; //���� �Է¹��� �� ���� ����

    while (1) //�ϴ� �� ���� ������������ �����ϴ� ������ ����. �������� �׽�Ʈ���̽��̹Ƿ� ���ѷ��� ����
    {
        scanf("%d %d %d", &a, &b, &c); //�� �� �Է¹���
        if (a == 0 && b == 0 && c == 0) //�������ٿ��� 0 0 0�� �Էµǰ� ����
            break; 

        // �� ���� ������������ ����
        int max, square = 0;

        if (a > b && a > c) 
        {
            max = a;
            square = b * b + c * c;
        }
        else if (b > a && b > c) 
        {
            max = b;
            square = c * c + a * a;
        }
        else 
        {
            max = c;            
            square = a * a + b * b;

        }

        //���� �ﰢ������ Ȯ��
        if (max * max == square)
        {
            printf("right\n");
        }
        else 
        {
            printf("wrong\n");
        }
    }
    return 0;
}

/* ���� �ڵ� �̰ɷ� ®���µ�, �ʹ� �� ���� ���� �ٲ� (�ʿ���� ������ ����)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
   int a, b, c = 0; //���� �Է¹��� �� ���� ����

    while (1) //�ϴ� �� ���� ������������ �����ϴ� ������ ����. �������� �׽�Ʈ���̽��̹Ƿ� ���ѷ��� ����
    {
        scanf("%d %d %d", &a, &b, &c); //�� �� �Է¹���
        if (a == 0 && b == 0 && c == 0) //�������ٿ��� 0 0 0�� �Էµǰ� ����
            break;

        // �� ���� ������������ ����
        int max, middle, min = 0;

        if (a > b && a > c)
        {
            max = a;
            if (b >= c)
            {
                middle = b;
                min = c;
            }
            else
            {
                middle = c;
                min = b;
            }
        }
        else if (b > a && b > c)
        {
            max = b;
            if (a >= c)
            {
                middle = a;
                min = c;
            }
            else
            {
                middle = c;
                min = a;
            }
        }
        else
        {
            max = c;
            if (a >= b)
            {
                middle = a;
                min = b;
            }
            else
            {
                middle = b;
                min = a;
            }
        }

        //���� �ﰢ������ Ȯ��
        if (max*max == middle*middle + min*min)
        {
            printf("right\n");
        }
        else {
            printf("wrong\n");
        }
    }

    return 0;
}
*/