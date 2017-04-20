#include<stdio.h>


int main(){

int n,i,p,k,j,a[10] ;

for(i=0;i<10;i++){a[i]=-1 ;}

while(1){

    printf("press 1 to add\n") ;
    printf("press 2 to search\n") ;
    printf("press 3 to delete\n") ;
    printf("press 4 to print\n") ;
    printf("press 5 to exit\n") ;

    scanf("%d",&x) ;

if(x==1){
    scanf("%d",&y) ;
    if(a[y%10]==-1){a[y%10]=y ;}
    else{
            k = y%10; i=0;
        while(a[k]!=-1){
            k = (k+i)%10 ; i++ ;
        }
        a[k] = y ;
    }
}
else if(x==2){
    scanf("%d",&y) ;  flag=0;
    for(i=0;i<10;i++){
        if(a[i]==y){flag=1; break;}
    }
    if(flag){   printf("key present");   }
    else{   printf("key not present");   }
}
else if(x==3){
     scanf("%d",&y) ;
k = y%10 ;
for(i=0;i<10;i++){

}
}


}



}
