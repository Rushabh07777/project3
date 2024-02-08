#include <stdio.h>

int main()
{
    char ch = 'a';

    printf("%c\n");
    while(ch<='z')
    {
        printf("%c", ch);
        ch+=4;
    }


}