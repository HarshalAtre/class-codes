#include <stdio.h>
#include <stdlib.h>


int main(){
    int a;
    printf("Enter the number to be shifted ");
    scanf("%d",&a);
    a=a<<2;
    printf("The number after shiifting bitwise 2 space left %d\n",a);
    system("pause");
}
