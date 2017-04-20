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

int max_heap(){
return h[0] ;
}

void print(){ int i ;
for(i=0;i<t;i++){
    printf("%d ",h[i]) ;
}
}




int main(){
int i;
for(i=0;i<=120;i++){h[i] =  0 ;}
int x,y ;
while(1){
    scanf("%d",&x) ;
if(x==1){
    scanf("%d",&y) ; insert(y) ;
}
else if(x==2){
    print() ;
}
else if(x==3){
    scanf("%d",&y) ; insert(y) ; for(i=0;i<t;i++){h1[i] =h[i] ;}
    for(i=1;i<y;i++){
        remove_top() ;
    }
    printf("%d\n",h[0]) ;
    for(i=0;i<t;i++){h[i] = h1[i] ;}
}
else{
    break ;
}

}


}
