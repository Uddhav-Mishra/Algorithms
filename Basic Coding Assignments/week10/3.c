#include<stdio.h>


int main(){

int n,i,p,k,j,a[1000],x,y,ans ;


scanf("%d%d",&n,&x) ;
for(i=0;i<n;i++){   scanf("%d",&a[i]) ;}
ans  = 0 ;
for(i=1;i<n;i++){
    if(a[i]<=a[i-1]){
        k = a[i-1]-a[i] ;
        y = k/x + ((k%x>0)?1:0) ;
        ans += y ; a[i] += x*y ;
        if(k==0){a[i]+=x ;ans++ ;}
    }
}
printf("%d",ans) ;
return 0 ;
}
