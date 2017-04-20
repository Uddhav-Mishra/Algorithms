#include<stdio.h>
int N=400 ;
int a[400],b[400],f,r,f2,r2 ;

int enqueue(int a[],int r,int x){
a[r] = x ; r = (r+1)%N ; return r ;
}

int dequeue(int a[],int f){
f = (f+1)%N ;return f ;
}

int front(int a[],int f){ return a[f] ;}

void print(int a[],int f,int r){
int i = f ;
while(i!=r){
    printf("%d ",a[i]); i = (i+1)%N ;
}
printf("\n") ;
}

int push(int a[],int r,int x){
a[r] = x ; r = (r+1)%N ; return r ;
}
int pop(int a[],int b[],int f,int r){
int f2=0,r2=0 ;
int k = f ;
while(k!=r){
    r2 = enqueue(b,r2,front(a,f)) ; k = dequeue(a,k) ;
}
f2 = dequeue(b,f2) ;


}

int main(){

int a[2000],b[3000],n,m ;
n = -1 ; m = -1;
n = push(a,n,1) ; n = push(a,n,5) ; n = push(a,n,8) ;
n = pop(a,b,n) ;
print(a,n) ;

}
