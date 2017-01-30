#include<stdio.h>

int main(){
int n,i,j,k,ans,x ;
int a[20],b[20],c[20] ;
scanf("%d",&n) ;

for(i=0;i<n;i++){scanf("%d",&a[i]) ;}
for(i=0;i<n;i++){scanf("%d",&b[i]) ;}
for(i=0;i<n;i++){scanf("%d",&c[i]) ;}

i=0;j=0;k=0;ans=11111110;

while(i<n && j<n && k < n){
  x = abs(a[i]-b[j]) + abs(b[j]-c[k]) + abs(c[k]-a[i]) ;

if(x<ans){ans=x;}

if(a[i]<b[j]&&a[i]<c[k]&&i<n){
    i++ ;
}
else if(b[j]<c[k]&&j<n){
    j++;
}
else{
    k++ ;
  }
}

printf("%d",ans) ;
return 0 ;

}
