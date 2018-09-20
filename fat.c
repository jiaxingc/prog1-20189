#include<stdio.h>
#include<stdlib.h>
int main()
 {
 int fat,num,i;
 printf("\n entre com um numero:");
 scanf("%d",&num);
 fat=1;
 for(i=1;i<=num;i++)
 {
 fat=fat*i;
 }
 printf("\n fat(%d)\n\n",num,fat);
 system("pause");
 return 0 ;
 }
