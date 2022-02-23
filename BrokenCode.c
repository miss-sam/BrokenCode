#include <stdio.h>

int main()
{
    char str[];
    printf("Please enter your name: ");
    scanf("%s", str);
    getchar();
    printf("Hello%s. \n", str);
    return 0;
}