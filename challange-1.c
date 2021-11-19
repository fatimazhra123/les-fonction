#include <stdio.h>
#include <stdlib.h>


    int add();
    int a = 0;
    int b = 0;
    int somme = 0;

int main()
{
   printf("enter number 1 : ");
   scanf("%d",&a);
   printf("enter number 2 : ");
   scanf("%d",&b);
   somme = add(a,b);
   printf("la somme est : %d \n",somme);
}


int add(int a,int b)
{
    return a + b;
}
