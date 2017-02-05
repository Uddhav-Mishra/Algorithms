#include<stdio.h>
int i,j,k,n,a[200],b[200],ans,t,done,x,y,lo,hi,md,flag=0;

void sorter(){
do{
    done = 1 ;
    for(i=0;i<(n-1);i++){
        if(a[i]>a[i+1]){
            t = a[i] ; a[i] = a[i+1] ; a[i+1] = t ; done  = 0 ;
        }
    }

}while(done==0)    ;
}

int bin_search(int lo,int hi,int key){
 flag = 0;
    while(lo<=hi){
        md = (lo+hi)/2 ;
        if(a[md]==key){flag = 1; return flag ; }
        else if(a[md]<key){     lo = md + 1 ;     }
        else{    hi = md-1 ;       }
    }
    return flag ;
}


int main(){

scanf("%d%d",&n,&x) ;

for(i=0;i<n;i++){scanf("%d",&a[i]); }

lo = 0 ; hi = n-1 ;
j = -1 ;
while(lo<=hi){
    md = (lo+hi)/2 ;
   if(lo==hi){  j = lo ;   break;   }
   else if( md<hi && a[md] > a[md+1] ){  j = md  ; break; }
   else if(md>lo && a[md] < a[md-1] ){ j = md-1  ; break;}
   else if( a[lo] >= a[md] ){  hi = md-1 ; }
   else{ lo = md+1 ;}
}

int pivot = j ;
int z ;
y = bin_search(0,j,x) ;  z = bin_search(j+1,n-1,x) ;
if(y==1||z==1){
printf("Yes") ;}
else{
  printf("No") ;
}

return 0 ;
}
