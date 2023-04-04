#include <stdio.h>
int main (){
    // print even and odd number with while loop
    int i;

    i = 0;
    while (i<=100)
    {
        if (i % 2 == 0){
            if(i==78){
                continue;
            }
            printf("%d", i);
        };
        i++;
    }
    return 0;
}