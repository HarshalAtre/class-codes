#include <stdio.h>
#include<conio.h>

int main(){
 int i,j;
 int n=5;
 for(i=1;i<=n;i++){
    int inc=0;
    for(j=1;j<=n-i;j++){
        printf(" ");
    }
    for(j=1;j<=(2*i)-1;j++){
        printf("%c",65+inc);
        inc+=2;
    }
    printf("\n");
 }   
 for(i=n;i>=1;i--){
    int inc=0;
    for(j=1;j<=(n-i)+1;j++){
        printf(" ");
    }
    for(j=1;j<=(2*i)-3;j++){
        printf("%c",65+inc);
        inc+=2;
    }
    printf("\n");
 }   
getch();
}