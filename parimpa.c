#include<stdio.h>
#include<stdlib.h>
int main(){
    int n1,n2;
    printf("entre com n1:");
    scanf("%d",&n1);
    n2= n1%2;
    if(n2==0){
             printf("\n o numero e par\n");
    }
    else {
             printf("\no numero e impar\n");
             }
             printf("%d\n",n2);
             system("pause");
             return 0;
             }
                    
