#include<stdio.h>
#include<math.h>

int main(){
int n,i,j,ans=0 ;
scanf("%d",&n) ;

for(i=2;i<=sqrt(n);i++){
        j = 0 ;
    while(n%i==0){
        n = n/i ; j++ ;
    }
    ans+=j ;
}
if(n>1)ans++;

printf("%d",ans);
return 0 ;
}
