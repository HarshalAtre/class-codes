#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c;
    printf("Enter a = ");
    scanf("%d",&a);
    printf("Enter b = ");
    scanf("%d",&b);
    printf("Enter c = ");
    scanf("%d",&c);
    (a>b)?(a>c)?printf("a is greater\n"):printf("c is greater\n"):(b>c)?printf("b is greater\n"):printf("c is greater\n");
    system("pause");
}
