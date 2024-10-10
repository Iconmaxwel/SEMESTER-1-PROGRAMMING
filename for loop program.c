 #include <stdio.h>
int main (){
int start;
int stop,sum = 0;

   printf("enter when to start:");
   scanf("%d",&start);
   printf("enter when to stop:");
   scanf("%d",&stop);

   for (int i = start ; i <= stop ;i++){
       printf("%d\n",i);
       sum += i;
   }
    printf("%d\n",sum);

return 0;
}
