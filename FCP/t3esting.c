#include<stdio.h>
#include<stdlib.h>
Int main(void){
   
    Int L,R,K,KT;
    Int max,maxf;
    Int kt,d;
    Int flag=0;
    Int c0,c1,c2,c3,c4,c5,c6,c7,c8,c9;
    C0=c1=c2=c3=c4=c5=c6=c7=c8=c9=0;
    Printf(“Enter the int L and R: “);
    Scanf(“%d %d”,&L,&R);
    K=L+1;
    KT=L+1;
    Max=(L-K)*(K-R);
    For(K=L+1;K<R;K++){
        Kt=K;
        Flag=0;
        While(kt>0){
            D=kt%10;
            Switch(d){
                Case 0:
                    C0++;
                    If(c0>1){
                        Flag = 1;
                    }
                    Break;
                Case 1:
                    C1++;
                    If(c1>1){
                        Flag = 1;
                    }
                    Break;
                Case 2:
                    C2++;
                    If(c2>1){
                        Flag = 1;
                    }
                    Break;
                Case 3:
                    C3++;
                    If(c3>1){
                        Flag = 1;
                    }
                    Break;
                Case 4:
                    C4++;
                    If(c4>1){
                        Flag = 1;
                    }
                    Break;
                Case 5:
                    C5++;
                    If(c5>1){
                        Flag = 1;
                    }
                    Break;
                Case 6:
                    C6++;
                    If(c6>1){
                        Flag = 1;
                    }
                    Break;
                Case 7:
                    C7++;
                    If(c7>1){
                        Flag = 1;
                    }
                    Break;
                Case 8:
                    C8++;
                    If(c8>1){
                        Flag = 1;
                    }
                    Break;
                Case 9:
                    C9++;
                    If(c9>1){
                        Flag = 1;
                    }
                    Break;
            }
            If(flag==1){
                Break;
            }
            Kt=kt/10;
           
        }
        C0=c1=c2=c3=c4=c5=c6=c7=c8=c9=0;
        Maxf = (L-K)*(K-R);
        If(max<maxf){
            If(flag==0){
                Max=(L-K)*(K-R);
                KT=K;
            }  
   
    }
    }
   
    Printf(“the value of K is : %d”,KT);
    Return EXIT_SUCCESS;
}
