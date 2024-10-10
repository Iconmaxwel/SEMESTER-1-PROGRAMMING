//program to calculate electricity bills for a customer
#include <stdio.h>

int main (){

 int customerID;
 char customerName;
 float unitsConsumed,u;
 float charges_per_unit,c;
 float bill,b;
 float total_amount_to_pay,a;
 float surcharge,s;

//prompt the user to enter the customerID,customerName,unitsConsumed
printf("enter the customerID:");
scanf("%d",&customerID);
printf("enter the customerName:");
scanf("%s",&customerName);
printf("enter the unitsConsumed:");
scanf("%f",&u);

//calculation of the total_amount_to_pay by the customer
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
