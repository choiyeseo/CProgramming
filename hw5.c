#include <stdio.h>

void binary(int n) {
    if (n > 1) {
        binary(n / 2);  // n을 2로 나눈 몫에 대해 재귀 호출
    }
    printf("%d", n % 2);  // 현재 나머지 출력
}

int main() {
    int data;

    printf("Please enter a number: ");
    if (scanf("%d", &data) != 1) {
        printf("올바른 양의 정수를 입력하세요.\n");
        return 1;
    }

    if (data < 0) {
        printf("양의 정수를 입력해주세요\n");
        return 1;
    }

f    binary(data);

    return 0;
}
