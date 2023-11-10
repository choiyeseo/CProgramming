#include <stdio.h>

int main(void)
{
    int n;
    int odd_arr[5] = {0};
    int even_arr[5] = {0};

    printf("Please input five integers: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        if (n % 2 == 0)    // 짝수
        {
            even_arr[i] = n;
        }
        else
        {
            odd_arr[i] = n; // 홀수
        }
    }

    printf("Odd numbers: ");
    for (int i = 0; i < 5; i++)
    {
        if (odd_arr[i] != 0)
        {
            printf("%d ", odd_arr[i]);
        }
    }

    printf("\nEven numbers: ");
    for (int i = 0; i < 5; i++)
    {
        if (even_arr[i] != 0)
        {
            printf("%d ", even_arr[i]);
        }
    }

    return 0;
}
