#include<stdio.h>


int main(){
    int n,i,j,k,l,ans,a[20000],b[30000],c[30000],flag ;
scanf("%d",&n) ;

for(i=0;i<n;i++){
    scanf("%d",&a[i]) ;
}


for(i=0;i<n;i++){

for(j=1;j<=10000;j++){b[j] = 0 ;}
k = a[i] ; j = 0 ;

while(k>0){
    c[j] = k%10 ; k/=10; j++;
} j--;

k = j ; flag=1 ;
for(j=0;j<=k;j++){ ans = 1 ;
    for(l=j;l<=k;l++){
        ans = ans*c[l] ;
        if(b[ans]>0){flag=0 ;break;}
        b[ans]++;
    }
    if(flag==0){break;}
}
if(flag){
    printf("%d ",a[i]) ;
}
}

}
