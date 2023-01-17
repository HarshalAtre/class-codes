#include <stdio.h>
#include <stdlib.h>
int main(){
    int cost,bill,calls;
    printf("Enter the No. of calls made ");
    scanf("%d",&calls);
    cost=250;
    if(calls>=100){
        bill=cost+(1.25*(calls-99));
    }
    else{
        bill=cost;
    }
    printf("The bill is %d ",bill);
    printf("Rs\n");
    system("pause");
}
