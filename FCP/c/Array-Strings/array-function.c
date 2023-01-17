#include <stdio.h>
#include<conio.h>
void printnumbers(int arr[],int n){//--> funtion delare with array as parameter int *arr is also okay instaed of int arr[] in parameter
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
int main(){
    int array[4]={56,56,45,33};
    printnumbers(array,4);//--> funtion call
getch();
}