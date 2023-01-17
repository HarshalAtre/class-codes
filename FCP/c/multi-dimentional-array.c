#include <stdio.h>
#include<conio.h>

int main(){
    int i,j;
    int arr[3][4];//--3x4 Matrix
    printf("Enter the elements of matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("arr[%d][%d]= ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
        for(i=0;i<3;i++){
        for(j=0;j<4;j++){
           printf("%d",arr[i][j]);
           printf(" ");
        }
        printf("\n");
        }
    
getch();
}
