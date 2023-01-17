#include <stdio.h>
#include<conio.h>

int main(){
    char name[100];
    char ch;
    int i=0;
    printf("Write Your Name : ");
    while(ch!='\n'){
        scanf("%c",&ch);
        name[i]=ch;
        i++;
    }
    name[i]='\0';
    puts(name);
getch();
}