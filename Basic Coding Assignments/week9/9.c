#include <stdio.h>
#include<string.h>
int main(int argc, char *argv[] )
{
    int i,j,k,ans,n ;
n = atoi(argv[2]) ;
    char s[2000] ; char a[400000][20] ;
int b[400000] ;
FILE *fp = fopen(argv[1],"r") ;
    ans = 0 ; i = 0 ;
while(fgets(s,50,fp)!=NULL){
strcpy(a[i],s); i++ ; }
n = i ;

for(i=0;i<n;i++){
ans = 0 ;
for(j=0;j<strlen(a[i]);j++){
ans+= a[i][j] ; }
b[i] = ans ; }






printf("%d %d",ans,n) ;

return 0 ;

}

