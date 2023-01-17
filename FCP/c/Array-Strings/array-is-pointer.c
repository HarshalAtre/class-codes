#include <stdio.h>
#include<conio.h>

int main(){
 int arr[]={29,28,84,49};
 int *ptr=&arr[0];
 printf("%d",ptr);
     *ptr=arr;//both syntax is same as array is a pointer to its 0th index   
 printf("%d",ptr);

getch();
}