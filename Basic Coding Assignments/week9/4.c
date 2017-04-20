#include <stdio.h>

int main()
{
    int i,j,k,ans ;
    char s[2000],t[2000][2000] ;
    int hash,n,a[20000]; 
    for(i=0;i<=20000;i++){a[i] = 0 ; } 
    scanf("%s",s) ;
scanf("%d",&n) ;
hash = 0 ;
for(i=0;i<n;i++){
    scanf("%s",t[i]); 
    for(j=0;j<strlen(t[i]);j++){
        hash += t[i][j] ;
    }
}
printf("%d\n",hash) ;
for(i=0;i<strlen(s);i++){ a[i] = s[i] ;}

  i=0;   j=0;   ans = 0 ;
n = strlen(s) ;
while(i<(n-1)&&j<(n-1)){
    if(ans<hash){  ans += a[i] ;i++ ;}
    else{
        while(ans>hash){
            ans -= a[j] ; j++ ;
        }
    }
    if(ans==hash){
        for(k=j;k<i;k++){
            printf("%c",s[k]) ;
        }
        printf("\n") ;  j=i ;ans = 0 ;
    }
}

return 0;

}

