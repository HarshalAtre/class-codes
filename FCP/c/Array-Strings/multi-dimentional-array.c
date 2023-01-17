#include <stdio.h>
#include<conio.h>

int main(){
    int i,j;
    int arr[3][3];
    printf("Enter the elements of matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("arr[%d][%d]= ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
        for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           printf("%d",arr[i][j]);
           printf(" ");
        }
        printf("\n");
        }
    
getch();
}
