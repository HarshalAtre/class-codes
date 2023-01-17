#include <stdio.h>
#include<conio.h>
void fibcal(int fib[],int n){
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
}
int main(){
int n;
printf("Enter n (n>2): ");
scanf("%d",&n);
int fib[n];
fibcal(fib,n);
for(int i=0;i<n;i++){
    printf("%d ",fib[i]);
}
getch();
}