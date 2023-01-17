#include <stdio.h>
#include <stdlib.h>
int main(){
    float distance,fuel,mileage;
    printf("Enter the Distance Travelled (in km) ");
    scanf("%f",&distance);
    printf("Enter the fuel consumed (in liters) ");
    scanf("%f",&fuel);
    mileage=distance/fuel;
    printf("The mileage of the vehicle is %.1f ",mileage);
    printf("km per liter\n");
system("pause");
}
