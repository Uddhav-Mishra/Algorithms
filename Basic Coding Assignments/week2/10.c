#include<stdio.h>

int main(){

int n,i,j,x,y,a[2000] ;
scanf("%d",&n) ;
for(i=0;i<n;i++)scanf("%d",&a[i]) ;

for(i=n-1;i>0;i--){
    if(a[i]<a[i-1]){
        y = i ;  break;    }
}

for(i=0;i<(n-1);i++){
    if(a[i]>a[i+1]){
        x = i ;  break;    }
}

printf("Swapped elements are %d %d at position %d %d",a[x],a[y],(x+1),(y+1)) ;
return 0 ;

}
