#include<stdio.h>

int main(){

int i,j,k,lo,hi,md,m,n,ans1,ans2,d1[200],x[200],y[200],d2[200] ;
int a[20][20] ;
for(i=0;i<=200;i++){x[i]=0;y[i]=0;d1[i]=0;d2[i]=0;}
int flag = 1 ;
for(i=1;i<=8;i++){
    for(j=1;j<=8;j++){
        scanf("%d",&a[i][j]) ;
        if(a[i][j]==1){
        if(x[i]>0||y[j]>0||d1[i+j]>0||d2[i-j+20]>0){
            flag = 0 ;
        }
        x[i]++;y[j]++; d1[i+j]++; d2[i-j+20]++;
        }
    }
}
if(flag){printf("YES\n") ;}
else{
    printf("NO\n") ;
}
return 0 ;
}
