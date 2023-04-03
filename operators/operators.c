#include <stdio.h>

int main () {
    int tk;
    scanf("%d", &tk);
    if(tk == 100){
        printf("ajke burger khabo");
    }else if(tk == 50){
        printf("burger khabo na");
    }
    else{
        printf("ajke roja");
    }
    return 0;
};

/*
note: here are some basic usage of operators and and conditional statements in c

  arithmatic operators
  ====================
  1 -> + (addition) to add to numbers
  2 -> - (substraction) to substract between two numbers

  3 -> / (division) to divide to number
  4 -> * (multiplication) to multiply numbers
  5 -> % (modulas) to calculate reminders

  logical operators ()
  =================
  && (and) operator -> check both statement is true or note if any single value is false returns false
  || (or) operator -> check any one value is true or note if any value is  returning true returns true;

   relational operators
   ====================
  > ( greater than) -> compare between two statement
  < (less than ) -> compare between two statement
  >= (greater than or equal ) compare statements greater than or equal 
  <= (less than or equal ) compare statement less than or equal or not

  comparison operator
  ===================
  =  (assingment operator) to store value we often use it 
  == (double equal ) check the statements are equal or not 
  === ( triple equal) check the satements are equal or not also with datatypes

   essential notes
   ===============
  ** while divide two intiger without floating number it returns an integer not float

 */