#include <stdio.h>
#include<conio.h>
void reversearr(int arr[],int n)
{
for(int i=0;i<n/2;i++){
    int first=arr[i];
    int last=arr[n-i-1];
    arr[i]=last;
    arr[n-i-1]=first;
    }
}
int main(){
 int n=5;
 int arr[5]={1,2,3,4,5};
    reversearr(arr,5);
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    //--> Note as we can see the function can change the value inside array unlike for other data types
getch();
}