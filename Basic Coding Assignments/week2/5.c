#include<stdio.h>
#include<string.h>

int main(){
int n,i,j,k,x ;
char s[200000],a[200000],b[200000] ;
int vis[20000] ;
gets(a) ; n = 0 ;
scanf("%d",&x) ;
for(i=0;i<strlen(a);i++){
    if(a[i]!=' '){ s[n] = a[i] ; n++ ;  }
}
s[n] = '\0' ;
for(i=0;i<n;i++){vis[i] = 0 ;}
k = 0 ;
for(i=0;i<n;i++){
        for(j=i;j<n;j+=x){
           if(!vis[j]){ b[k] = s[j];  k++ ; vis[j]=1; }
        }
}
b[k] = '\0' ;

printf("%s",b) ;

}
