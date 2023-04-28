#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    printf("print the size of array :");
    scanf("%d", &a);
    int ar[a];
    for (int i = 0; i <= a; i++)
    {
        scanf("%d", &ar[i]);
    }

    return 0;
}