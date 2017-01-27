#include<stdio.h>

int main(){

    int a[100][100],b[100][100],i,j,c[100],d[100],m,p,n,sum = 0  ;

    scanf("%d%d",&m,&p) ;
    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            scanf("%d",&a[i][j]) ;
        }

    }

     scanf("%d%d",&p,&n) ;
    for(i=0;i<p;i++){ sum = 0;
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]) ; sum += b[i][j] ;
        }
        d[i]=sum ;
    }

      for(i=0;i<p;i++){ sum = 0 ;
        for(j=0;j<m;j++){
           sum += a[j][i] ;
        }
        c[i] = sum ;
    }
    int ans = 0 ;
    for(i=0;i<p;i++){
        ans+=c[i]*d[i] ;
    }

    printf("%d",ans) ;
    return 0 ;

}
