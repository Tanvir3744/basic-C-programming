#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/* print strings within an array */
int main() {
    int a;
    scanf("%d", &a);
    char arr[a];
    /* taking input of an array */
    for (int i = 0; i < a; i++)
    {
        scanf("%c", &arr[i]);
    }

    /* printing the array */

    for (int i = 0; i < a; i++){
        printf("%c", arr[i]);
    }

        return 0;
}