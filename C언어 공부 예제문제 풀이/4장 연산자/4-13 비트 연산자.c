/* 작성자: 위재성
    제목: 비트 연산자 */

#include <stdio.h>

int main(void)
{
    int a = 10;     // 비트열 00000000 00000000 00000000 00001010
    int b = 12;     // 비트열 00000000 00000000 00000000 00001100

    printf("a & b : %d\n", a & b);      // 비트별 논리곱 연산자 00000000 00000000 00000000 00001000 : 두 비트가 모두 1인 경우에만 1로 계산
    printf("a ^ b : %d\n", a ^ b);      // 비트별 배타적 논리곱 연산자 00000000 00000000 00000000 00000110 : 두 비트가 서로 다른 경우에만 1로 계산
    printf("a | b : %d\n", a | b);      // 비트별 논리합 연산자 00000000 00000000 00000000 00001110 : 두 비트 중에서 하나라도 참이면 1로 계산
    printf("~a : %d\n", ~a);            // 비트별 부정 연산자 11111111 11111111 11111111 11110101 : 1을 0으로, 0을 1로 바꾸어 계산
    printf("a << 1 : %d\n", a << 1);    // 비트 이동 연산자 00000000 00000000 00000000 00010100 : 비트를 왼쪽으로 이동시킨다.
    printf("a >> 2 : %d\n", a >> 2);    // 비트 이동 연산자 00000000 00000000 00000000 00000010 : 비트를 오른쪽으로 이동시킨다.

    return 0;
}