#include <stdio.h>
#include<conio.h>
void countvov(char arr[]){
  int i=0;
  int count=0;
  for(i=0;arr[i]!='\0';i++){
    switch (arr[i])
    {
    case 'a':
        count++;
        break;
    case 'A':
        count++;
        break;
    case 'e':
        count++;
        break;
    case 'E':
        count++;
        break;
    case 'i':
        count++;
        break;
    case 'I':
        count++;
        break;
    case 'o':
        count++;
        break;
    case 'O':
        count++;
        break;
    case 'u':
        count++;
        break;
    case 'U':
        count++;
        break;
    
    default:
        break;
    }
  }
   printf("%d\n",count);
  }
int main(){
    char name[]="Harshal";
    char str[]="Hello World";
    countvov(name);
    countvov(str);
getch();
}