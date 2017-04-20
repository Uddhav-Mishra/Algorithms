#include<stdio.h>
#include<string.h>
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
int i,j,k,l,n,m ;
int a[100][100],b[100],c[100],ii[100],jj[100] ;

scanf("%d%d",&n,&m) ;
for(i=0;i<n;i++){ b[i] = 0 ;
    for(j=0;j<m;j++){
        scanf("%d",&a[i][j]) ;
    }
}
for(i=0;i<n;i++){insert(a[i][0]) ;}
int cnt=0;
while(cnt<n*m){
j = max_heap() ; remove_top() ;
for(i=0;i<n;i++){
if(a[i][b[i]]==j){
printf("%d %d %d\n",j,i,b[i]); cnt++ ;
b[i]++ ;insert(a[i][b[i]]) ; break;}
}



}




}
