#include <stdio.h>
int main(){
    int money;
    scanf("%d", &money);
    if(money >= 5000){
        printf("we can go cox bazar");
        if(money >= 10000){
            printf("we will go seint martin");
        }
        else{
            printf("we will come back");
        }
    }else{
        printf("we will come back from cox bazar");
    }
    return 0;
}