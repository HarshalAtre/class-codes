#include<stdio.h>
 #include<conio.h> 
int main() 
{ 
	                          float num1,num2,add,sub,mul,div;           
	 	char x; 
	 	printf("WELCOME TO MY SIMPLE CALCULATOR\n"); 
 	printf("Enter your num1:");  	scanf("%f",&num1);  	printf("Enter your num2:"); 
 	scanf("%f",&num2);  	 
 	 add=num1+num2;  	 sub=num1-num2;  	 mul=num1*num2; 
	 	 div=num1/num2; 
 	  
	 	 printf("Enter your operator(+,-,*,/):"); 
	 	 scanf("%s",&x); 
 	  
 	 switch(x) 	
 	 { 		
 	  	case '+': 	
 	  	 	{ 	
 	  	 	 	printf("\nYour choice is addition\n"); 
 	  	 	 	printf("Your addition of num1 and num2 is %f",add); 
 	  	 	 	break; 
 	 	 	 } 	
 	 	case '-': 	
 	  	 	{ 	
 	  	 	 	printf("Your choice is substraction\n"); 
 	  
 	 	 	printf("Your substraction of num1 and num2 is %f",sub);
 	  	 	 	break; 
 	 	 	 } 	
 	  	case '*': 	
 	  	 	{ 	
 	  	 	 	printf("Your choice is multiplication\n"); 
 	  
	 	 	printf("Your multiplication of num1 and num2 is %f",mul); 
 	  	 	 	break; 
 	 	 	 } 	
 	 	case '/': 	
 	  	 	{ 	
 	  	 	 	printf("Your choice is division\n"); 
 	  	 	 	printf("Your division of num1 and num2 is %f",div); 
 	  	 	 	break; 
 	 	 	 } 	  
	 	 	default: 
	 	 	 	{   printf("Your choice is invalid.\n"); 
	 	 	 	 	printf("Please choose a correct operand."); 
	 	 	 	 	break; 
	 	 	 	} 
	 	 } 
	 	 getch(); 
}   	

