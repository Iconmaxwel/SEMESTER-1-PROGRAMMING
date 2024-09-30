#include <stdio.h>
#include <math.h>

//program to calculate compound interest
int main(){

   float amount;
   float principal;
   float rate;
   float number_of_compoundings;
   float time;
   float compound_interest;

    printf("enter the principal:");
    scanf("%f",&principal);
    printf("enter the rate(in percentage):");
    scanf("%f",&rate);
    printf("enter the number_of_compoundings:");
    scanf("%f",&number_of_compoundings);
    printf("enter the time (in years):");
    scanf("%f",&time);

amount=principal*pow((1+rate/number_of_compoundings),(number_of_compoundings*time));
compound_interest=amount-principal;
printf("the compound_interest is:%f\n",compound_interest);

    return 0;
}
