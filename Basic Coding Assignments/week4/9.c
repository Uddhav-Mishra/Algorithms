#include<stdio.h>

int main(){

int i,j,k,n,l,r,a[200],b[200],ans,t,done;
ans = 0 ;
scanf("%d",&n) ;

for(i=0;i<200;i++){ a[i]= 0 ; b[i]=0;}

for(i=0;i<n;i++){ scanf("%d",&a[i]); b[a[i]]++; }



do{
    done = 1 ;
    for(i=0;i<(n-1);i++){
        if(a[i]>a[i+1]){
            t = a[i] ; a[i] = a[i+1] ; a[i+1] = t ; done  = 0 ;
        }
    }

}while(done==0)    ;


for(i=0;i<(n-1);i++){
    for(j=i+1;j<n;j++){
        if(b[(a[i]+a[j])]>0){ans++ ;}
    }
}

printf("%d",ans) ;
return 0 ;

}
