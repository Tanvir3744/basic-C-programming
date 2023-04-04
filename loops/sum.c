#include <stdio.h>
int main (){
    int sum = 0;
    int i;
    for (i = 0; i <= 100; i++){
        if(i%2 == 0){
            if(i == 20){
                continue;
            }
            printf("%d\n", i);
        }
    }
    return 0;
}