#include <stdio.h>
#include<conio.h>

int main(){
    int n;
    int sum=0;
    printf("Enter Your Number To check : ");
    scanf("%d",&n);
    int temp=n;
    while (temp!=0){ 
    int fact=1;
     int lastdig=temp%10;
     while(lastdig!=1){
        fact=fact*lastdig;
        lastdig--;
     }
     sum+=fact;
     temp/=10;
    }
    if(n==sum){
        printf("Yes it is a Strong Number");
    }
    else{
        printf("No it is Not a Strong Number");
    }
   
    
getch();
}