#include <stdio.h>  
#include<conio.h>

int main(){
    int noOFpolicy,amtOFpolicy;
    float commission;
    printf("Enter the no. of policycy and the amount of policycy");
    scanf("%d%d",&noOFpolicy,&amtOFpolicy);
    
    if(amtOFpolicy<=10000){
        commission=amtOFpolicy*noOFpolicy*0.005;
    }
    else if(amtOFpolicy<=25000 && amtOFpolicy>=10000){
        commission=50 + (amtOFpolicy-10000)*noOFpolicy*0.006;
    }
    else if(amtOFpolicy>25000){
        commission=140 + (amtOFpolicy-25000)*noOFpolicy*0.0075;
    }
    else{
        printf("Invalid input");
        commission=0;
    }
    printf("Total commision due to sales woman is %.02f",commission);

getch();
}