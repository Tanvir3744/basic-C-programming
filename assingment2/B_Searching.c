#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    long long int n;
    scanf("%lld", &n);


    int pos; 

    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%ld", &a[i]);
    }

    int search;
    printf("enter digit for search :");
    scanf("%d", &search);

    for (int i = 0; i < n; i++)
    {
        if(search == a[i]){
            pos = i;
        }
        if(search != a[i]){
            pos = -1; 
        }
    }

    printf("%d", pos);

    return 0;
}