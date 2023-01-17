#include <stdio.h>
#include<conio.h>
void isThere(char arr[],char ch){
  int i=0;
  int count=0;
  for(i=0;arr[i]!='\0';i++){
if(arr[i]==ch){
    printf("Yes it is present");
    return;
}
  }
   printf("No, it is not present");
  }
int main(){
    char name[]="Harshal";
    isThere(name,'y');
getch();
}