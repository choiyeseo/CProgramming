#include <stdio.h>

int main(void)
{
    int data, count = 0;

    printf("Please enter a number: ");
    scanf("%d", &data);

    if (data <= 1)
    {
        printf("It is not a prime number");
    }
    for (int i = 2; i < data; i++)
    {
        if(data % i == 0)
        {
            printf("It is not a prime number");
            return 0; // 소수 아님 -> 종료
        }
    }
    printf("It is a prime number");
    
    return 0;
}