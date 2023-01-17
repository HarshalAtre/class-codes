#include <stdio.h>
#include<conio.h>

int main(){
 int add=2020;
 int add2=2021;
 int *ptr=&add;
 int *_ptr=&add2;
    printf("%d\n",ptr);
    *ptr++;//---> increase the pointer value by 4 as the interger data type takes 4 bytes in memory
    printf("%d\n",ptr);
    
    printf("%u\n",ptr-_ptr);//-->we can add or subtract
    printf("%u\n",ptr>_ptr);//--we can compare to pointers
    //note add or subtract not gives the actual value it give with respect to that data type
    //if diffrece is 4 then answer will be 1 which is 1 integer 
    //-->both pointer should be of same data type for arithmatic operations
getch();
}