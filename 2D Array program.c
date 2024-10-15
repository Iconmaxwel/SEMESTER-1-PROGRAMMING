// c array - 2D arrays

#include <stdio.h>
int main (){
    int m,n;
    int marks [3][4]={{56,71,90,30},{41,78,94,20},{64,81,40,25}};
       for (m=0;m<3;m++){
       for (n=0;n<4;n++)
       printf("marks [%d][%d]= %d \n ",m,n,marks [m][n]);
       }

    return 0;
}

