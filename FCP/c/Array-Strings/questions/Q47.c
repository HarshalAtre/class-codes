#include <stdio.h>
#include<conio.h>
void printstring(char arr[]){
   for(int i=0;arr[i]!='\0';i++){
      printf("%c",arr[i]);
   }
}
int main(){
   char firstname[]="Harshal";
   char lastname[]="Atre";
   char ch;
   int i=0;
   printstring(firstname);
   printf(" ");
   printstring(lastname);
getch();
}