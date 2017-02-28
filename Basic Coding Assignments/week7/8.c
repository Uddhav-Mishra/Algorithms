#include<stdio.h>
int a[200],n,f,r  ;

int size(){
return (n-f+r)%n ;
}
int isEmpty(){
return (f=r);
}
int front(){
return a[f] ;
}
void dequeue(){
f = (f+1)%n ;
}
void enqueue(int x){
a[r]=x ;
r = (r+1)%n ;
}

int main(){

n = 100 ;

f=0 ; r=0 ;
int y,q,i ; int b[200] ;
scanf("%d",&y) ;

for(i=0;i<y;i++){
    scanf("%d",&b[i]) ;
}
int ans = 0 ;
for(i=0;i<y;i++){
    enqueue(b[i]) ;   ans+=(size()-1);
printf("size of queue is %d\n",size()) ;
    while(front()<b[i]){
        dequeue() ;
    }
}

printf("%d",ans) ;

}

