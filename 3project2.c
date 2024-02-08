#include <stdio.h>

int main()
{
    long long num;
    int count = 0;
    scanf("%d", &num);
    do
    {
        count++;
        num /= 10;
    } while(num != 0);

    printf("Total number of digits:%d", count);
}