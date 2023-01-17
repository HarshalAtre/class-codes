#include <stdio.h>
#include<conio.h>
#include <string.h>
int main(){
    char pass[100];
    char salt[100]={'1','2','3','\0'};
    char new[200];
   printf("Enter Your Password: ");
   scanf("%s",pass);
   strcat(pass,salt);
   puts(pass);
getch();
}