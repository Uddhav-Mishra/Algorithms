#include<stdio.h>

int main(){

int n,i,j,k,val,cnt,a[200] ;

scanf("%d",&n) ;

for(i=0;i<n;i++){scanf("%d",&a[i]); }

j = 0 ; val = 0 ;
cnt = 1 ;
for(i=1;i<n;i++){
    if(a[j]==a[i]){cnt++ ;}
    else{cnt-- ;}
    if(cnt==0){
        j = i ;   cnt = 1;
    }
}

val= a[j] ;
cnt = 0 ;
for(i=0;i<n;i++){
    if(a[i]==val){cnt++ ;}
}

if(cnt>n/2){printf("majority element is %d",val) ;}
else{ printf("NONE") ;}


}
