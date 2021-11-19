#include <stdio.h>
#include <stdlib.h>

void echanger();
int a = 0;
int b = 0;

int main()
{
   printf("enter number a : ");
   scanf("%d",&a);
   printf("enter number b : ");
   scanf("%d",&b);
   echanger(a,b);
   
}


void echanger(int a,int b)
{
     
    int c = 0;
     printf("b = %d \n",
    c = a;
    a = b;
    b = c;
    printf("a = %d \n",a);
    printf("b = %d \n",b);
}