#include<stdio.h>

int main(){

int i,j,k,a[300],n,t ;

scanf("%d",&n) ;

for(i=0;i<n;i++){scanf("%d",&a[i]) ;}
k = 0 ;
for(i=0;i<10;i++){
    for(j=0;j<n;j++){
        if(a[j]%10==i){
            t = a[j] ;
            a[j] = a[k] ;
            a[k] = t ; k++ ;
        }
    }
}

for(i=0;i<n;i++){   printf("%d ",a[i]) ;   }

}
