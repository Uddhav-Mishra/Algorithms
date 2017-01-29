#include<stdio.h>
#include<string.h>
int les(int x){

if(x>1&&x<=7){return 1 ;}
else if(x>7&&x<=9){return 2 ;}
else{return 0 ;}

}
int main(){
char s[14] ;
long long int b[14],a[14]   ;
int i,j,n,m,k,ans=0 ;

scanf("%s",s) ;



b[0] = 1 ;
for(i=1;i<=12;i++){
    b[i] = 3*b[i-1] ; //printf("%lld",b[i]) ;
}
//printf("\n%d\n",strlen(s)) ;

for(i=1;i<strlen(s);i++){
    ans += b[i] ;
}


for(i=0;i<strlen(s);i++){
    a[i] = s[i]-48;
}


for(i=0;i<strlen(s);i++){
    if(a[i]==1||a[i]==7||a[i]==9){
        ans+= les(a[i])*b[(strlen(s)-i-1)] ; if(i==(strlen(s)-1))ans++ ;
    }
    else{
        ans+= les(a[i])*b[(strlen(s)-i-1)] ; break;
    }
}

printf("%d",ans) ;

}
