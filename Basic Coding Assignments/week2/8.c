#include<stdio.h>

int main(){
int n,i,j,k,a[200],b[200] ;

scanf("%d%d",&n,&k) ;

for(i=1;i<=(n-k+1);i++){
    a[i]=9;
}
j=8;
for(i=(n-k+2);i<=n;i++){
    a[i] = j ; j-- ;
}

// minimum possible
for(i=1;i<=n;i++)b[i]=-1;
b[1] = 1 ;
if(k!=1){
    j = k-1 ;
    for(i=n;i>1;i--){
        if(j>=2){
            b[i] = j ; j-- ;
        }
    }
    for(i=1;i<=n;i++){
        if(b[i]<0)b[i]=0;
    }
}
else{
    for(i=1;i<=n;i++){
        b[i] = 1 ;
    }
}
if(n==1)b[1]=0;

for(i=1;i<=n;i++){ printf("%d",a[i]) ;} printf("\n") ;
for(i=1;i<=n;i++){  printf("%d",b[i]) ;}  printf("\n") ; ;

return 0 ;
}




