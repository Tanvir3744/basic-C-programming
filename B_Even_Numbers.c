#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    int i;
    if(a==1){
            printf("%d", -1);
    }else{
        for (i = 1; i <= a; i++)
    {
       if(i%2 == 0){
           printf("%d\n", i);
       }
    }
    }
    
    return 0;
}

