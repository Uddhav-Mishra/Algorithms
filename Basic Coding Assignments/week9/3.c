#include<stdio.h>
#include<string.h>

int main(){

int a[9][9],b[9] ;

for(i=0;i<9;i++){
    for(j=0;j<9;j++){
        scanf("%d",&a[i][j]) ;
    }
}
flag=1 ;
for(i=0;i<9;i++){
        for(j=0;j<9;j++){b[i]=0;}

    for(j=0;j<9;j++){
      if(b[a[i][j]]!=0){flag=0; break ;}
      b[a[i][j]]++;
    }
}
for(i=0;i<9;i++){
        for(j=0;j<9;j++){b[i]=0;}

    for(j=0;j<9;j++){
      if(b[a[j][i]]!=0){flag=0; break ;}
      b[a[j][i]]++;
    }
}


}
