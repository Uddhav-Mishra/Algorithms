#include<stdio.h>
#include<string.h>

int main(){

    char a[100] ;
    char b[100];
    int i,j,k,g ;
    gets(a) ;
    gets(b) ;

    int ans = 0 ;
    for(i=0;i<strlen(b);i++){
        k = 0 ;
        g = i ;
        for(j=0;j<strlen(a);j++){
            if(a[j]==b[g]){
                k++ ;
            }
            else{break ;}
            g++;
        }
        if(k==strlen(a))ans++ ;
    }
    printf("%d",ans) ;
    return 0 ;

}
