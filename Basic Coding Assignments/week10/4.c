#include<stdio.h>
#include<string.h>

int min(int a,int b){
if(a<b){return a ;}
return b ;}
int main(){

int n,i,p,k,j ,x,y,ans,m ;
int a[100][100] ,b[100][100]  ;

char str[2000] ;

scanf("%s",str) ;

n = strlen(str);
    int C[n][n];
   int P[n][n];

    int L;
    for (i=0; i<n; i++)
    {
        P[i][i] = 1;
        C[i][i] = 0;
    }
   for (L=2; L<=n; L++)
    {for (i=0; i<n-L+1; i++)
        {j = i+L-1;
            if (L == 2){
                    if((str[i] == str[j])){P[i][j] = 1 ;}
                    else{  P[i][j] = 0 ;     }
            }
            else{
                P[i][j] = (str[i] == str[j]) && P[i+1][j-1];}
      if (P[i][j] == 1){
                C[i][j] = 0;}
            else
            {   C[i][j] = 10000000;
                for (k=i; k<=j-1; k++)
                    C[i][j] = min (C[i][j], C[i][k] + C[k+1][j]+1);
          }
        }
    }

    ans = C[0][n-1]+1;

    printf("%d\n",ans) ;
i = 0 ;

while(i<n){
    for(j=n-1;j>=i;j--){
        if(P[i][j]==1){
            break ;
        }
    }
    for(k=i;k<=j;k++){
        printf("%c",str[k]) ;
    }printf(" ") ;
    i=j+1 ;
}

return 0;
}
