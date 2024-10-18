// c function to calculate electricity bill for a customer
#include <stdio.h>
#include <math.h>
int main (){
    int customerID,i;
    char customerName,n;
    int unitsconsumed,u;
    int charges_per_unit,c;
    int bill,b;
    int surchage,s;
    int total_amount_to_pay,a;

    printf("enter the customerID:");
    scanf("%d",&i);
    printf("enter the customerName:");
    scanf("%s",&n);
    printf("enter the unitsconsumed:");
    scanf("%d",&u);

    if(u <= 199){
    printf("charges_per_unit is 1.20\n",c = 1.20);
} else if (u <= 400){
    printf("charges_per_unit is 1.50\n",c = 1.50);
} else if (u <= 600){
    printf("charges_per_unit is 1.80\n",c = 1.80);
} else  {
    printf("charges_per_unit is 2.00\n",c = 2.00);
}

b = c * u ;

//surcharge  conditions
if (b < 100){
    printf("the bill is:100\n",b=100);
}

 if (b > 400){
    s = b * 0.15;
    }

 //calculate amount to pay
    a = s + b ;
    printf("Total Amount to Pay: %.2f\n", a);

return 0;
}
