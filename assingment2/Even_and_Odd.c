#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    int pos_sum=0;
    int neg_sum=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int v;
        scanf("%d", &v);
        if(v%2 ==0){
            pos_sum += v;
        }else{
            neg_sum += v;
        }
    }
      printf("%d %d", pos_sum, neg_sum); 
    return 0;
}