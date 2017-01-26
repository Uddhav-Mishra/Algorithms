#include<stdio.h>
#include<time.h>
int a[10000002],b[1000002],c[1000002] ;

void count_sort(int n){
int i ;
for(i=0;i<n;i++){   a[b[i]]++ ;  }

for(i=0;i<10000002;i++){    a[i] += a[i-1] ;}

for(i=n-1;i>=0;i--){
   if(a[b[i]]>0){ c[a[b[i]]] = b[i] ; a[b[i]]-- ;}
}

}


int main(){

int n,i,j,k,val,cnt ;

scanf("%d",&n) ;
for(i=0;i<n;i++){b[i] = rand()%10000000 ; }

count_sort(n) ;
for(i=1;i<=n;i++){
    printf("%d ",c[i]) ;
}
}
