#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/* taking input with string... */
int main() {
    char a[10];
    scanf("%s", &a);

    int size = sizeof(a) / sizeof(char);
    printf("%d \n",size);
    printf("%s \n", a);

    return 0;
}