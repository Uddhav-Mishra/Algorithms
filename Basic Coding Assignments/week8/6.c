#include<stdio.h>

//int a[300],b[300],t1=0,f1=0,r1=0,t2=0,f2=0,r2=0 ;

int N=400 ;
int size(int f,int r){
    return (N-f+r)%N ;
}
int enqueue(int a[],int r,int x){
a[r] =x ; r=(r+1)%N ;  return r ;
}

int dequeue(int a[],int f){
f = (f+1)%N ; return f ;
}

int front(int a[],int f){
return a[f] ;}


int main(){

int a[300],b[300],f1=0,r1=0,f2=0,r2=0 ;
int x,y,i,j,k ;
while(1){
printf("press 1 to enqueue\n") ;
printf("press 2 to dequeue\n") ;
printf("press 3 to find min\n") ;
scanf("%d",&x) ;
if(x==1){
    scanf("%d",&y) ;
    r1=enqueue(a,r1,y) ;
    if(f2==r2){
        r2 = enqueue(b,r2,y) ;
    }
    else {
        j  = size(f2,r2) ;
        while(j){
          k = front(b,f2) ;
        f2 = dequeue(b,f2) ;
        if(k<=y){ r2 =  enqueue(b,r2,k) ;}
        j--;r2 = enqueue(b,r2,y) ; }
    }
}
else if(x==2){
        k = front(a,f1) ;
    f1 = dequeue(a,f1) ;
    if(k<=front(b,f2)){f2=dequeue(b,f2) ;}
}
else if(x==3){
    printf("%d\n",front(b,f2)) ;
}
else{
    break;
}

}
return  0 ;
}
