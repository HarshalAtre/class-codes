#include <stdio.h>  
#include<conio.h>

int main(){
    float parchaseAmt;
    scanf("%f",&parchaseAmt);
    float bill,milld,handd;
    if(0<=parchaseAmt && parchaseAmt<=100){
        milld=0;
        handd=((5/100)*parchaseAmt);
        printf("%f",handd);
    }
    else if(101<=parchaseAmt&& parchaseAmt<=200){
        milld=(5/100)*parchaseAmt;;
        handd=(7.5/100)*parchaseAmt;
    }
    else if(201<=parchaseAmt&& parchaseAmt<=300){
        milld=(7.5/100)*parchaseAmt;;
        handd=(10/100)*parchaseAmt;
    }
    else if(parchaseAmt>=300){
        milld=(10/100)*parchaseAmt;;
        handd=(15/100)*parchaseAmt;
    }
    else{
        printf("invalid");
    }

    bill=parchaseAmt-(milld+handd);
    printf("The Net Amount To Pay is %.02f",bill );
getch();
}
