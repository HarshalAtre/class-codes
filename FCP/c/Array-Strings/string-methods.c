#include <stdio.h>
#include<conio.h>
#include<string.h>
//Include the string.h files to use string methods
int main(){
char name[100]="Harshal";
char firstname[100]="Harshal";
char lastname[100]="Atre";
//1
printf("The length of string is %d\n",strlen(name));//--> gives the length excluing null character   
//2
puts(name);
puts(lastname);
strcpy(name,lastname);//--> copy the string content of right string in left
puts(name);
puts(lastname);
//3
puts(strcat(firstname,lastname));//-> concatinate(merge) the two strings without any space in between them
//--> it merges and store both string in first string so capaciticy of first string should be atleast length of 1 + length of 2
//4
int com=strcmp(firstname,lastname);
//positive-->first str is greater than secondstr
//negetive-->viceversa
//0 --> equal
printf("%d",com);


getch();
}