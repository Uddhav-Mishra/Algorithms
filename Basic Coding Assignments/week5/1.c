#include<stdio.h>
#include<string.h>


int main(){

int i,j,k,a[300],b[200],c[200],n,m,t,x,l,lo,hi,flag,ans = 0  ;
char s[3000] ;
scanf("%s",s) ;
ans = -2 ;
n = strlen(s) ;
for(i=0;i<n;i++){
    for(j=i;j<n;j++){

    for(k=j+1;k<n;k++){
            if((k+(j-i+1))<n){
            x = i ; flag = 1 ;
        for(l=k;l< (k+(j-i+1));l++){
                if(s[l]!=s[x]){
                    flag = 0 ; break ;
                }
                x++ ;
               }
        if(flag==1&&(j-i+1)>ans){
            lo = i ; hi = j ; ans = j-i+1 ;
             }
        }
    }
  }
}

for(i=lo;i<=hi;i++){
    printf("%c",s[i]) ;
}

}
