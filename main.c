#include <stdio.h>

int main(void)
{
    int score;

    scanf("%d", &score);

    if (score < 0 || score > 100)
    {
        printf("NG\n");
    }
    else if (score >= 90)
    {
        printf("AA\n");
    }
    else if (score >= 80)
    {
        printf("A\n");
    }
    else if (score >= 70)
    {
        printf("B\n");
    }
    else if (score >= 60)
    {
        printf("C\n");
    }
    else if (score >= 1)
    {
        printf("D\n");
    }
    else
    {
        printf("/\n");
    }

    return 0;
}