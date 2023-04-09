#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    int i;
    scanf("%d", &a);
    for (i = 2; i <= a; i= i+2)
    {
        printf("%d \n", i);
        if(i<1){
            printf("%d", -1);
        }
    }
    return 0;
}