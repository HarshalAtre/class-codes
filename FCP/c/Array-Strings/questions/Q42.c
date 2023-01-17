#include <stdio.h>
#include<conio.h>
int countOdd(int array[],int n){
    int count=0;
    for(int i=0;i<n;i++){
    if(array[i]%2!=0){
      count++;
    }
 }  
   return count;
}
int main(){
 
 int arr[]={1,2,3,4,5,6,7,8,9};
 int ans=countOdd(arr,10);
 printf("%d",ans);
getch();
}