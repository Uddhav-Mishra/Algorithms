#include<stdio.h>

int insert(int a[],int n,int x){
n++ ; a[n] = x ; return n ;
}

int delete(int a[],int n){
 n--;   return n ;
}

int top(int a[],int n){
return a[n] ;}

int push(int a[],int n,int x){
    n++ ; a[n] = x ; return n ;
}

int pop(int a[],int b[],int n){
int i = 0 ; int k = n ;
int m=-1 ;

while(k>0){
    m = insert(b,m,top(a,k)) ; k = delete(a,k) ;
}
m = delete(b,m) ;
while(m>0){
    k = insert(b,k,top(b,m)) ; m = delete(b,m) ;
}
--n; return n ;
}

void print(int a[],int n){
int i ;
for(i=n;i>=0;i--){
    printf("%d ",a[i]);
}
printf("\n") ;
}

int main(){

int a[2000],b[3000],n,m ;
n = -1 ; m = -1;
n = push(a,n,1) ; n = push(a,n,5) ; n = push(a,n,8) ;
n = pop(a,b,n) ;
print(a,n) ;



}
