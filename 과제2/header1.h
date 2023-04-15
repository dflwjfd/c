#include <stdio.h>

int gcd(int num1, int num2)
{
    int min_num = num1 < num2 ? num1 : num2; // 두 수 중 작은 수 찾기
    int gcd = 1; // 초기값 설정

    for (int i = 2; i <= min_num; i++) // 작은 수부터 2씩 증가하며 검사
    {
        if (num1 % i == 0 && num2 % i == 0) // 두 수 모두 나누어 떨어질 경우
        {
            gcd = i; // 최대공약수 갱신
        }
    }

    printf("최대공약수: %d\n", gcd);
    return gcd;
}

int gcd1()
{
    int num1 = 0, num2 = 0;
    printf("숫자1:");
    scanf_s("%d", &num1);
    printf("숫자2:");
    scanf_s("%d", &num2);
    int min_num = num1 < num2 ? num1 : num2; // 두 수 중 작은 수 찾기
    int gcd = 1; // 초기값 설정

    for (int i = 2; i <= min_num; i++) // 작은 수부터 1씩 증가하며 검사
    {
        if (num1 % i == 0 && num2 % i == 0) // 두 수 모두 나누어 떨어질 경우
        {
            gcd = i; // 최대공약수 갱신
        }
    }

    printf("최대공약수: %d\n", gcd);
    return gcd;
}


int lcm(int num1, int num2) {
    int min_num = num1 < num2 ? num1 : num2; // 두 수 중에서 작은 수를 기준으로 설정
    while (1)
    {
        if (min_num % num1 == 0 && min_num % num2 == 0) 

        {
            printf("두 수의 최소공배수:%d", min_num);
            return min_num; // 두 숫자 모두로 나누어 떨어지는 최소공배수를 찾음
        }
        min_num++;

    }

int lcm1()
{
    int num1 = 0, num2 = 0;
    
    printf("num1:");
    scanf_s("%d", &num1);

    printf("num2:");
    scanf_s("%d", &num2);
    int min_num = num1 < num2 ? num1 : num2;
    while (1)
    {
        if (min_num % num1 == 0 && min_num % num2 == 0)
        {
            printf("두 수의 최소공배수:%d", min_num);
            return min_num;
        }

        min_num++;

    }
   
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
    printf("소수를 판별할 수를 입력하세요: ");
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
