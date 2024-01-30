#include <stdio.h>

int main(void){
    float euros, tax;
    printf("Enter euros-and-cents amount to add taxes to it e.g. 100.00: ");
    scanf("%f", &euros);

    tax = euros * 0.19;
    printf("The amount with taxes is: %.2f\n", euros + tax);
    return 0;
}