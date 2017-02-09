#include<stdio.h>
#include<string.h>

typedef struct stud{

   char name[30] ;
   int gp ;

}stud;

void swaps(stud *a,stud *b){

stud temp  ;

temp = *a ;
*a = *b ;
*b = temp ;

}

int main(){

int i,j,k,b[200],c[200],n,m,t,x,l,lo,hi,flag,ans = 0  ;
char a[30] ;
scanf("%d",&n) ;

stud *s = (stud *)malloc(n*(sizeof(stud))) ;

for(i=0;i<n;i++){
    scanf("%s",&s[i].name) ;
    scanf("%d",&s[i].gp) ;
}

k = 0 ;

for(i=0;i<n;i++){
    if(s[i].gp==1){
        swaps(s+i,s+k) ; k++ ;
    }
}
k = n-1 ;
for(i=n-1;i>=0;i--){
     if(s[i].gp==3){
        swaps(s+i,s+k) ; k-- ;
    }
}

for(i=0;i<n;i++){
    printf("%d %s\n",s[i].gp,s[i].name) ;
}

}
