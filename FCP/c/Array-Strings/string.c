#include <stdio.h>
#include<conio.h>

int main(){
int n;
char name[]={'H','A','R','S','H','A','L','\0'};
char name[]="HARSHAL";//--> no Need of \0 complier will add it
// printf("Enter the no of total letters in your string (consider space as letter)\n");

scanf("%d",&n); 
char arr[n];
printf("Enter the string\n");
gets(arr);//-----> why not working?
fgets(arr,100,stdin);
puts(arr);
puts(name);
getch();
}