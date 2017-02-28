#include<stdio.h>
int h[30000],t=0 ;
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

int main(){
int i;
for(i=0;i<=120;i++){h[i] =  0 ;}
insert(24) ;  insert(16) ;insert(13) ;insert(14) ;insert(3) ;insert(11) ;insert(12) ;insert(4) ;insert(2) ;insert(1) ;
//  24  16  13  14   3  11  12  4   2  1
for(i=0;i<t;i++){printf("%d ",h[i]) ;}
printf("\n") ;
printf("h[t-1] is %d\n",h[t-1]) ;
printf("%d\n",max_heap()) ;
remove_top() ;
 printf("%d\n",max_heap()) ;
for(i=0;i<t;i++){printf("%d ",h[i]) ;}
printf("\n") ;

}
