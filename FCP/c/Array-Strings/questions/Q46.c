#include <stdio.h>
#include<conio.h>
void storetable(int arr[][10],int n,int m, int number){
    int i;
    for(i=0;i<m;i++){
        arr[n][i]=number*(i+1);
    }
}
void printarr(int arr[][10],int n){
    for(int i=0;i<10;i++){
        printf("%d ",arr[n][i]);
    }
    printf("\n");
}
int main(){
    int tables[2][10];
    storetable(tables,0,10,2);
    storetable(tables,1,10,3);
    printarr(tables,0);
    printarr(tables,1);

}