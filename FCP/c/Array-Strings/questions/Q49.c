#include <stdio.h>
#include<conio.h>
int countLength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count-1;
}
int main(){
    char firstname[100];
    int i=0;
    fgets(firstname,100,stdin);
    int length=countLength(firstname);
    printf("%d",length);
   
getch();
}