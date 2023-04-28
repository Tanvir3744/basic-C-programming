#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int a;
    int even = 0, odd = 0, positive = 0, negative = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if(a%2==0){
            even += 1;            
        }else if(a%2 ==1 || a %2 == -1){
            odd += 1;
        }

        // check the number is even or odd;
        if(a < 0){
            negative += 1;
        }else if(a > 0){
            positive += 1;
        }
    }
    printf("Even: %d\n Odd: %d\n Positive: %d\n Negative: %d", even, odd, positive, negative);
    return 0;
}