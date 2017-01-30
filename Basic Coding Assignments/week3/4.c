#include<stdio.h>


int main(){
int n,k,i,j ;

scanf("%d",&n) ;

k = 1 ;

int *a[(n+1)] ;

for(i=1;i<=n;i++){
a[i] = (int*)malloc((n+1)*sizeof(int)) ;
}



for(i=1;i<=n;i++){a[1][i] = k ; k++ ; }

for(i=2;i<=n;i++){a[i][n] = k ; k++ ; }
//printf(" WORKING \n" ) ;
for(i=n-1;i>0;i--){a[n][i] = k ; k++ ; }


//printf(" WORKING \n" ) ;
 //  printf("%d\n",k) ;

i = n-1 ;
int y,z,c ;j=0;
while(i>1){

if(j==n){
for(j=n-1;j>0;j--){ a[i][j] = k ;k++ ;}
}
else if(j==0){
for(j=1;j<n;j++){  a[i][j] = k ;   k++ ; }
}
i--;
}

for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
printf("%d ",a[i][j]) ;}
printf("\n") ; }

return 0 ;

}
