#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int a;
        scanf("%d", &a);
        do
        {
            printf("%d ", a % 10);
            a = a / 10;
        } 
        while (a != 0);
        printf("\n");
    }
    return 0;
}