#include <stdio.h>

int gcd(int num1, int num2)
{
    int min_num = num1 < num2 ? num1 : num2; // �� �� �� ���� �� ã��
    int gcd = 1; // �ʱⰪ ����

    for (int i = 2; i <= min_num; i++) // ���� ������ 2�� �����ϸ� �˻�
    {
        if (num1 % i == 0 && num2 % i == 0) // �� �� ��� ������ ������ ���
        {
            gcd = i; // �ִ����� ����
        }
    }

    printf("�ִ�����: %d\n", gcd);
    return gcd;
}

int gcd1()
{
    int num1 = 0, num2 = 0;
    printf("����1:");
    scanf_s("%d", &num1);
    printf("����2:");
    scanf_s("%d", &num2);
    int min_num = num1 < num2 ? num1 : num2; // �� �� �� ���� �� ã��
    int gcd = 1; // �ʱⰪ ����

    for (int i = 2; i <= min_num; i++) // ���� ������ 1�� �����ϸ� �˻�
    {
        if (num1 % i == 0 && num2 % i == 0) // �� �� ��� ������ ������ ���
        {
            gcd = i; // �ִ����� ����
        }
    }

    printf("�ִ�����: %d\n", gcd);
    return gcd;
}


int lcm(int num1, int num2)
{
    int result = gcd(num1, num2) / (num1 * num2);
    printf("%d", result);

    return result;

}

int lcm1()
{
    int num1 = 0, num2 = 0;
    printf("num1:");
    scanf_s("%d", &num1);

    printf("num2:");
    scanf_s("%d", &num2);


    int result = gcd(num1, num2) / (num1 * num2);
    printf("%d", result);

    return result;

}

int is_prime(int num)
{
    if (num < 2)
        return 0;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            printf("false");
            return 0;
            break;
    }
    printf("true");
    return 1;
}

int is_prime_with_input()
{
    int num;
    printf("�Ҽ��� �Ǻ��� ���� �Է��ϼ���: ");
    scanf_s("%d", &num);
    if (is_prime(num))
    {
        printf("True");;
        return 1;
    }
    else
    {
        printf("False");
        return 0;
    }
}
