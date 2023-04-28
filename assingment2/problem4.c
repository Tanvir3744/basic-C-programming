#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a;
    int index, update;
    scanf("%d", &a);
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
    }

    /* take index number and update value  as input */
    scanf("%d %d", &index, &update);
    ar[index] = update;

    for (int i = a - 1; i >= 0; i--)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}