#include <stdio.h>

int main()
{
    char ch = 'a';

    printf("%c\n");
    while(ch<='z')
    {
        printf("%c\n", ch);
        ch+=4;
    }


}