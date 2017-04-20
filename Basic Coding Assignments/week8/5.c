#include<stdio.h>
int h[30000],h1[30000],t=0 ;

void insert(int x){
h[t] = x ; t++ ;
heapify_up((t-1));
}
void heapify_up(int i ){
int p = (i-1)/2 ;
if(p<0){return ;}
else{
 if(h[p]<h[i]){
    int temp = h[p] ;
    h[p] = h[i];
    h[i] = temp ;
    heapify_up(p) ;
 }
}
}

void remove_top(){
h[0] = h[(t-1)] ;  t-- ;
heapify_down(0) ;
}

void heapify_down(int i ){
int l = 2*i+1 ; int largest ;
int r = 2*i+2 ;
if(l<(t)){
    if(h[l]>h[r]){
        largest = l ;
    }
    else{
        largest = r ;
    }

if(h[largest]>h[i]){
    int temp = h[largest] ;
    h[largest] = h[i] ;
    h[i] = temp ;

heapify_down(largest) ;
}
}
}

int top(){
return h[0] ;
}

void print(){ int i ;
for(i=0;i<t;i++){
    printf("%d ",h[i]) ;
}
}




int main(){
int i,n,x;
for(i=0;i<=120;i++){h[i] =  0 ;}
int a[400] ;
scanf("%d",&n) ;
for(i=0;i<n;i++){scanf("%d",&x) ; insert(x) ; }
i = n-1 ;
while(i>=0){
a[i] = top() ; i-- ;  remove_top() ;
}
for(i=0;i<n;i++){
    printf("%d ",a[i]) ;
}
}
