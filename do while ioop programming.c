#include <stdio.h>
int main (){
    int start;
    int stop,sum = 0;

    printf("enter when to start:");
    scanf("%d",&start);
    printf("enter when to stop:");
    scanf("%d",&stop);

    do{
        printf("%d\n",start);
        sum =sum + start; start ++ ;
    }
    while (start  <= stop);
        printf("the sum is:%d\n",sum);

     return 0;
}
