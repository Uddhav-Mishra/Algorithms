#include<stdio.h>
#include<string.h>

int main(){

int i,j,k,n,ans=0;
int a[2000],b[2000],w[2000] ;
scanf("%d",&n) ;
for(i=0;i<=1000;i++){b[i]=0;}

for(i=0;i<n;i++){
    scanf("%d%d",&a[i],&w[i]) ;
    if(a[i]!=w[i]){
      b[a[i]]++ ;
      if(b[w[i]]>0){b[w[i]]--;}
      else{ans++;}
    }
}

printf("%d",ans) ;

}
