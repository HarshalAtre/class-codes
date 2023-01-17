#include <stdio.h>
#include<conio.h>
void slice(char arr[],int n,int m){
    int i;
    for(i=n;i<=m;i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}
int main(){
    char name[100]="Harshal";
    char str[]="HelloWorld";
    slice(name,3,6);
    slice(str,3,6);
getch();
}