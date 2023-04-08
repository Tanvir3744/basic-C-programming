#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a;
    scanf("%d", &a);

    // extract first digit from the whole number;
    int firstdigit;
    int i;
    while (a >= 10)
    {
        a = a / 10;
        i++;
   }

   // assing the exracted number into this variable;
   firstdigit = a;
   
    // check wheres the first number is even or odd;
   if(firstdigit % 2 == 0){
        printf("EVEN");
   }else{
        printf("ODD");
   } 
   return 0;
}