#include <stdio.h>
#include <stdlib.h>
int main(){
     int a,b;
 printf("Enter a = " );
 scanf("%d",&a);
 printf("Enter b = " );
 scanf("%d",&b);

 if(a%b==0){
    printf("The division is possible");
 }
 else{
    printf("The division is not possible\n");
 }
 system("pause");
}
