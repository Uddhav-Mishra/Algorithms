#include<stdio.h>


int main(){
long long int n,i,j,k,ans,a[200],m ;
    scanf("%lld",&n) ;
    k = n ;i = 0 ;

while(k){ a[i] = k%10 ;
         k/=10 ; i++ ;}
m = i-1 ;
printf("%d\n",m) ;

for(i=1;i<=m;i+=2){
    a[i]*=2 ;
    if(a[i]>9){
        a[i] = a[i]%10 + a[i]/10 ;}
}
ans = 0 ;
for(i=1;i<=m;i++){
    ans+=a[i] ; printf("%d ",a[i]) ;
}
printf("%d\n",ans) ;
if((ans+a[0])%10==0){
    printf("valid") ;
}
else{
    printf("invalid") ;
}

}
