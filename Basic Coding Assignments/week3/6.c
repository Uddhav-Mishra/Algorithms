#include<stdio.h>

int main(){

int i,j,k,lo,hi,md,m,n,ans1,ans2 ;
int a[1000] ;

scanf("%d%d",&n,&m) ;

for(i=0;i<n;i++){
    scanf("%d",&a[i]) ;
}

lo=0;  hi= n-1;

while(lo<hi){
    md = (lo+hi)/2 ;
if(a[md]>=m){
        hi = md   ;
    }
    else{
        lo = md + 1 ;
    }

}
ans1=lo ;

lo=0;  hi= n-1;
while(lo<hi){
    md = (lo+hi)/2 ;
if(a[md]> m){
        hi = md   ;
    }
    else{
        lo = md + 1 ;
    }
}
if(a[lo]!=m){lo--;}
ans2 = lo ;

printf("%d",(ans2-ans1+1)) ;

return 0 ;
}
