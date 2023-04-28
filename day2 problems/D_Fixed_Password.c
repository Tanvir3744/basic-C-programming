#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x = 1999;
    int a;
    int i;
    while (i !=EOF)
    {
        scanf("%d", &a);
        if(x == a){
            printf("Correct\n");
            break;
        }else{
            printf("Wrong\n");
        }
        i++;
    }
    

    return 0;
}