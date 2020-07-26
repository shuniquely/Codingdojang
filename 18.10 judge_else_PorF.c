#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int K, E, M, S, result;

    scanf("%d %d %d %d", &K, &E, &M, &S);

    result = (K + E + M + S) / 4;

   if(K >=0 && K <= 100 && E >= 0 && E <= 100 && M >= 0 && M <= 100 && S >= 0 && S <= 100)
    {
        if(result >= 85)
            printf("합격");
        else
            printf("불합격");
    }

    else
    {
        printf("잘못된 점수");
    }
    
}