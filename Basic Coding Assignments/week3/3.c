#include<stdio.h>
int a[200];
int seed(int x,int d){

int y = x*x ;
int k = y;
int j=0;

while(k){ a[j] = k%10 ;j++;
k/=10 ;
}

int z = (j-d)/2 +  (j-d)%2 ; int p=1;

int ans = 0 ;

for(j=z;j<z+d;j++){
    ans += p*a[j] ; p*=10;
}

return ans ;
}


int main(){
int n,i,j,k,ans,x,m ;
char s[200] ;k=0;

scanf("%d %d",&n,&m) ;
 j = n ;
 while(j){j=j/10;k++;}


for(i=0;i<m;i++){
        n = seed(n,k) ;
printf("%d\n",n) ;
}
return 0 ;
}



