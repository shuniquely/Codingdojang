#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    if(num1&&num2) printf("참\n");
    else printf("거짓\n");

    if(num1||num2) printf("참\n");
    else printf("거짓\n");

    if(!num1) printf("참\n");
    else printf("거짓\n");
}