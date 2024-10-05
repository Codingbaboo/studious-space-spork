/* 제목: break를 사용한 반복문 종료 
    작성자: 위재성 */

#include <stdio.h>

int main(void)
{
    int i;                      // 반복 횟수를 세기 위한 제어 변수
    int sum = 0;                // 1부터 10까지의 합을 누적할 변수

    for (i = 1; i <= 10; i++)   // i는 1부터 10까지 증가하면서 열 번 반복
    {
        sum += i;               // i 값을 sum에 누적
        if (sum > 30) break;    // 누적한 값이 30보다 크면 반복문을 끝낸다.
    }

    printf("누적된 값: %d\n", sum);
    printf("마지막으로 더한 값 : %d\n", i);

    return 0;
}