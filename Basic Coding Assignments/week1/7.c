#include<stdio.h>
#include<string.h>

int main(){

    long long int n,i,j,ans ;

    scanf("%lld",&n) ;
    ans = 0 ;
    while(n>0){
        if(n%2==1){ans++;}
        n/=2 ;
    }

    printf("%d",ans) ;

}
