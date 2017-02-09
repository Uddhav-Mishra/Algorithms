#include<stdio.h>
#include<string.h>
void bubble_sorter(int a[],int n){
int done ;
do{
int i,t;
done = 1 ;
    for(i=0;i<(n-1);i++){
        if(a[i]<a[i+1]){
            t = a[i] ; a[i] = a[i+1] ; a[i+1] = t ; done  = 0 ;
        }
    }

}while(done==0)    ;

}

int cal(int k){
int j = 0 ;
while(k){
    if(k%2!=0){j++ ;}
    k/=2 ;
}
return j ;
}

typedef struct pairs{
int ff ;
int ss  ;
}pairs;

int main(){

int i,j,k,a[300],n,m,t,mx,ans = 0  ;
mx = -1 ;
char s[200][200] ;
scanf("%d",&n) ;

pairs *p = (pairs *)malloc(n*(sizeof(pairs))) ;
pairs *q = (pairs *)malloc(n*(sizeof(pairs))) ;

for(i=0;i<n;i++){
    scanf("%s",s[i]) ; k = 0 ;
    for(j=0;j<(int)strlen(s[i]);j++){
        k += (int)s[i][j] ;
    }

    p[i].ff = cal(k) ; p[i].ss = i ;
    mx = ((mx<p[i].ff)?mx:p[i].ff) ;
}

int c[mx+1] ;
for(i=1;i<=mx;i++){
    c[i]=0 ;
}
for(i=0;i<n;i++){
    c[p[i].ff]++ ;
}
for(i=2;i<=mx;i++){
    c[i] += c[i-1] ;
}




}
