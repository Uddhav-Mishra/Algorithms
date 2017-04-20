#include<stdio.h>

int max(int a,int b){
if(a>b){return a ;}
return b ;
}
int main(){

int n,i,p,k,j ,x,y,ans,m ;
int a[100][100],b[100][100] ;

scanf("%d%d",&n,&m) ;

for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        scanf("%d",&a[i][j]) ; b[i][j] = a[i][j];
    }
}
for(i=0;i<n;i++){
    for(j=1;j<m;j++){
        b[i][j]+=b[i][j-1] ;
    }
}
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("%d ",a[i][j]) ;
    } printf("\n") ;
}
ans = 0 ; p = 0;
for(i=0;i<m;i++){
    for(j=i;j<m;j++){ p =  0 ;
        for(k=0;k<n;k++){
            p += (b[k][j]-b[k][i]+a[k][i]) ;
            ans = max(ans,p) ; p = max(p,0) ;
        }
    }
}

printf("%d",ans) ;

}
