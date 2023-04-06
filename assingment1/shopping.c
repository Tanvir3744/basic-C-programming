#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n <= 1000){
        printf("Bad luck!");
    }else if(n > 1000 && n == 1450){
            printf("I will buy Punjabi");
    }else if(n >= 1500){
        printf("I will buy Punjabi\n");
        printf("I will buy new shoes\n");
        printf("Alisa will buy new shoes");
    }
    return 0;
}