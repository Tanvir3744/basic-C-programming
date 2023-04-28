#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int a[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    if (sum < 0)
    {
        sum = sum * -1; 
    }
    printf("%lld", sum);
    return 0;
}

