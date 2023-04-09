#include <stdio.h>


char digit_to_char(int digit) {
    if (digit < 10) {
        return '0' + digit;
    }
    else {
        return 'A' + digit - 10;
    }
}

void convert_base(int num, int base) {
    if (num == 0) {
        return;
    }
    else {
        int remainder = num % base;
        convert_base(num / base, base);
        printf("%c", digit_to_char(remainder));
    }
}

int main(void)
{
int num, base;

printf("��ȯ�� 10���� �Է�: ");
scanf_s("%d", &num);

printf("��ȯ�� ���� �Է�(2-16): ");
scanf_s("%d", &base);


    scanf_s("%d", &base);


printf("%d�� %d���� ��ȯ ��: ", num, base);
convert_base(num, base);
printf("\n");

return 0;
}