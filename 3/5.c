#include <stdio.h>
#include <stdlib.h>
int main(){
    int inches;
    printf("Enter the distance in inches ");
    scanf("%d",&inches);
   float centimeters=inches*2.54;
    printf("The Distance in centimeters is %.2f",centimeters);
    printf(" cm \n");
    system("pause");
}
