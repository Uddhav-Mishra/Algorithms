#include<stdio.h>

void bubble_sorter(int a[],int n){
int done ;
do{
int i,t;
done = 1 ;
    for(i=0;i<(n-1);i++){
        if(a[i]<a[i+1]){
            t = a[i] ; a[i] = a[i+1] ; a[i+1] = t ; done  = 0 ;
        }
    }

}while(done==0)    ;

}


int main(){

int i,j,k,a[300],n,m,t,ans = 0  ;

scanf("%d%d",&n,&m) ;

for(i=0;i<n;i++){scanf("%d",&a[i]) ;}

k = 0 ;
bubble_sorter(a,n) ;

while(a[m-1]!=0){

    for(i=0;i<m;i++){
        a[i]-- ;
    }
    ans++ ;
    bubble_sorter(a,n) ;
}

printf("%d",ans) ;

return 0 ;

}
