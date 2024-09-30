#include <stdio.h>

int main () {

    float age;
    float annual_income;

    printf("enter your age:");
    scanf("%f",&age);
    printf("enter your annual_income:");
    scanf("%f",&annual_income);

    if (age>=21&annual_income>=21000) {
       printf("congratulations you qualify for a loan.\n:");
    } else {
       printf("unfortunately,we are unable to offer you a loan at this time.\n:");
       }

    return 0;
}
