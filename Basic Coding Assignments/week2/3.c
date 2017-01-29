#include<stdio.h>
#include<math.h>

typedef struct{

int row ;
int column ;
int value ;

}tuples;

int main(){

int i,j,k=0 ;
int a[10][10] ;
for(i=0;i<6;i++){
    for(j=0;j<6;j++){
        scanf("%d",&a[i][j]) ; if(a[i][j]!=0)k++ ;
    }
}

if(k>=10){return 0 ;}

tuples b[10] ;

k = 0 ;
for(i=0;i<6;i++){
    for(j=0;j<6;j++){
if(a[i][j]!=0){ b[k].row = i; b[k].column = j ; b[k].value = a[i][j] ;     k++ ;   }
    }
}
printf("SPARSE MATRIX\n") ;
for(i=0;i<k;i++){
 printf("%d %d %d\n",b[i].row,b[i].column,b[i].value) ;
}

for(i=0;i<k;i++){
 j = b[i].row ;
 b[i].row = b[i].column ;
 b[i].column = j ;
}
printf(" TRANSPOSE OF SPARSE MATRIX\n") ;
for(i=0;i<k;i++){
 printf("%d %d %d\n",b[i].row,b[i].column,b[i].value) ;
}

}
