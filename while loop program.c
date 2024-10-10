#include <stdio.h>

int main (){
    int start;
    int stop;
    int sum = 0;

    printf("enter when to start :");
    scanf("%d",&start);
    printf("enter when to stop :");
    scanf("%d",&stop);

    while ( start <= stop ){
         printf("%d\n",start);
          sum= sum + start;
         start ++ ;
    }
    printf("the sum is :%d\n",sum);

    return 0;
}
