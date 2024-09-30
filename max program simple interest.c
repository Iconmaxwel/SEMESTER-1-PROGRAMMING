#include <stdio.h>

int main() {
    float principal;
    float rate;
    float time;

    printf("enter the principal:");
    scanf("%f",&principal);
    printf("enter the rate:");
    scanf("%f",&rate);
    printf("enter the time:");
    scanf("%f",&time);

int si;
    si=(principal*time*rate)/100;
    printf("%d",si);

    return 0;
}
