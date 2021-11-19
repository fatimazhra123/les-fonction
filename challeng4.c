#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int a, b, r;
int divededby(int a,int b)
{
    r = a / b;
    return r;
}


bool isPremier()
{
    int v = 0, i;
    for(int i = 1;i <= r;i++){
        if((r % i) == 0){
            v++;
        }
    }
    if(v == 2){
        return true;
    }
    else{
        
        return false;
    }
}
int main()
{   
    int a ;
    int b ;
    int divition = 0;
   printf("enter number a : ");
   scanf("%d",&a);
   printf("enter number b : ");
   scanf("%d",&b);
    divededby(a,b);
    printf("le resultat c est : %d", r);
   if(isPremier() == true){
       printf("the number %d is premier.\n",r);
   }else{
       printf("the number %d is not premier.\n",r);
   }
   
}
