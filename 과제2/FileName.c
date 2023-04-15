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

printf("변환할 10진수 입력: ");
scanf_s("%d", &num);

printf("변환할 진법 입력(2-16): ");
scanf_s("%d", &base);



printf("%d의 %d진수 변환 값: ", num, base);
convert_base(num, base);
printf("\n");

return 0;
}
