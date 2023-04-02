#include <stdio.h>

int main (){
    int rahim;
    int karim;
    float mohammad;
    char greet;
    scanf("%d %d %f %c", &rahim ,&karim, &mohammad, &greet);
    printf("%d %d %0.3f %c",rahim, karim, mohammad, greet);
    return 0;
}

/*
notes:
1.to print a value which has taken by input (scanf) we should use here a specifier
2. if we want to get input from user and then store them in a variable we should use & sign before that varible;
 */