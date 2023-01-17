#include <stdio.h>
#include <stdlib.h>
int main(){
    int years,months,days,week;
    printf("Enter the days ");
     scanf("%d",&days);
     years=days/365;
     week=(days%365)/7;
     days=days-(years*365+week*7);
     printf("years = %d " ,years);
     printf("week = %d " ,week);
     printf("days = %d\n " ,days);
system("pause");
}
