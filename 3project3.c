#include <stdio.h>
int main()
{
    int n, sum=0, first, last;

    scanf("%d", &n);
    
    last= n % 10;
    while(n >= 10)
    {
        n = n / 10;
    }
    first = n;

    sum = first+ last;
    printf("The sum of the first and the last digit:%d", sum);
    return 0;
}