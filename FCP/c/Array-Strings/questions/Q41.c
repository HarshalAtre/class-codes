#include <stdio.h>
#include <conio.h>

int main(){
    float price[3];
    int i;
    for(i=0;i<3;i++){
        printf("Enter the Price of item no. %d\t",i+1);
        scanf("%f",&price[i]);
    }
    for(i=0;i<3;i++){
        printf("The Final cost of item no. %d is ",i+1);
        printf("%.3f\n",price[i]+((0.18*price[i])));
    }
    
getch();
}