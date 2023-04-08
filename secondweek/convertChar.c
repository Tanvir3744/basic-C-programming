#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char a;
    scanf("%c", &a);
    if(a >='a' && a<='z'){
        int answer = a - 32;
        printf("%c", answer);
    }else{
        int answer = a + 32;
        printf("%c", answer);
    }

    return 0;
}