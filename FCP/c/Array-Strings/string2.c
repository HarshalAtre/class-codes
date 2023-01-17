#include <stdio.h>
#include<conio.h>

int main(){
    char name[100];
    // scanf("%s",name);//--> not &name becaouse array is a pointer so name array itself has its address
    // printf("%s",name);//--> directly takes input and gives output for string 
    //%s not takes the words witten after spaces there for we use gets or fgets
    printf("gets ");
    gets(name);//--> not safe and outdated
    printf("fgets ");
    fgets(name,100,stdin);
    puts(name);
    
getch();
}