#include<stdio.h>

void occurences(int a[],int n){

int i,j,t,done = 1 ;

do{
    done = 1 ;
    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            t = a[i] ;
            a[i] = a[i+1] ;
            a[i+1] = t ;  done =0  ;
        }
    }
}while(done==0) ;
int cnt = 1 ;
for(i=1;i<n;i++){
    if(a[i]==a[i-1]){cnt++ ;}
    else{
        printf("%d %d\n",a[i-1],cnt) ; cnt = 1 ;
    }
}

printf("%d %d\n",a[n-1],cnt) ;

}


int main(){

int i,j,k,a[300],n ;

scanf("%d",&n) ;

for(i=0;i<n;i++){scanf("%d",&a[i]) ;}

occurences(a,n) ;

}
