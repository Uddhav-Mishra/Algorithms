#include<stdio.h>



int main(){

int i,j,k,a[300],n,m,t,ans = 0  ;

scanf("%d",&n) ;

for(i=0;i<n;i++){scanf("%d",&a[i]) ;}
k = 0 ;
for(i=0;i<n;i++){
    if(a[i]%2==0){
        t = a[i] ;  a[i] = a[k] ; a[k] = t ;k++ ;
    }
}

for(i=0;i<n;i++)
{
    printf("%d ",a[i]) ;
}


}
