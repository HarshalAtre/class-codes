#include<stdio.h>
#include<conio.h>
int main()
{
int days; //using switch operator
printf("1) Monday\t");
printf("2) Tuesday\t");
printf("3) Wednesday\t");
printf("4) Thursday\n");
printf("5) Friday\t");
printf("6) Saturday\t");
printf("7) Sunday\n");
printf("Please enter a value:"); //between 1-7
scanf("%d",&days);
switch(days)
{
case 1:
printf("Monday\n");
break;
case 2:
printf("Tuesday\n");
break;
case 3:
printf("Wednesday\n");
break;
case 4:
printf("Thursday\n");
break;
case 5:
printf("Friday\n");
break;
case 6:
printf("Saturday\n");
break;
case 7:

printf("Sunday\n");
break;
default:
printf("INVALID:Please enter value between 1-7\n");
break;

}
getch();
}
