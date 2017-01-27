#include<stdio.h>
#include<string.h>

int main(){

    int c,n,p,i,k ;

    scanf("%d%d%d",&c,&n,&p) ;
    k = 1 ;
    for(i=0;i<n;i++){
        k *=c ;
        k = k%p ;
    }
    printf("%d",k);  }
