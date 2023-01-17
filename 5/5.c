#include <stdio.h>  
#include<conio.h>

int main(){
    float parchaseAmt;
     printf("Enter the purchase amount ");
    scanf("%f",&parchaseAmt);
    float bill,milld,handd;
    if(0<=parchaseAmt && parchaseAmt<=100){
        milld=0;
        handd=(5*parchaseAmt)/100;
        printf("Mill cloth discount %.02f\n",milld);
        printf("Handloom Items discount %.02f\n",handd);
    }
    else if(101<=parchaseAmt&& parchaseAmt<=200){
        milld=((5)*parchaseAmt)/100;
        handd=((7.5)*parchaseAmt)/100;
        printf("Mill cloth discount %.02f\n",milld);
        printf("Handloom Items discount %.02f\n",handd);
    }
    else if(201<=parchaseAmt&& parchaseAmt<=300){
        milld=((7.5)*parchaseAmt)/100;
        handd=((10)*parchaseAmt)/100;
        printf("Mill cloth discount %.02f\n",milld);
        printf("Handloom Items discount %.02f\n",handd);
    }
    else if(parchaseAmt>=300){
        milld=((10)*parchaseAmt)/100;
        handd=((15)*parchaseAmt)/100;
        printf("Mill cloth discount %.02f\n",milld);
        printf("Handloom Items discount %.02f\n",handd);
    }
    else{
        printf("invalid input");
    }

    bill=parchaseAmt-(milld+handd);
    printf("The Net Amount To Pay is %.02f\n",bill );
getch();
}