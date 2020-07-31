#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char c;

    scanf("%c", &c);

    if(c != 'k') printf("참\n");
    else printf("거짓\n");

    if(c > 'h') printf("참\n");
    else printf("거짓\n");

    if(c <= 'o') printf("참\n");
    else printf("거짓\n");
}