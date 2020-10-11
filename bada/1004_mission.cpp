#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
    int A, B;

    scanf("%d %d", &A, &B);
    printf("%d\n%d\n%d\n%d\n%d\n", A + B, A-B, A * B, A / B, A % B);

    return 0;
}

int solve() {
    int A, B, C;

    scanf("%d %d %d" , &A, &B, &C);
    printf("%d\n%d\n", (A + B) % C, ((A % C) + (B % C)) % C);
    printf("%d\n%d\n", (A * B) % C, ((A % C) * (B % C)) % C);

    return 0;
}

int solve1() {
    int num1, num2;
    int a, b, c, d;

    scanf("%d %d", &num1, & num2);

    a = num1 * (num2 % 10);
    b = num1 * ((num2 / 10) % 10);
    c = num1 * (num2 / 100);
    d = num1 * num2;

    printf("%d\n%d\n%d\n%d\n", a, b, c, d);

    return 0;
}