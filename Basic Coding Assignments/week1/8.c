#include<stdio.h>
#include<string.h>

int main(){
    char a[200] ;
    char b[] = "goodbye" ;
    int i,j,flag ;

    scanf("%s",a) ;
j = 0 ;
for(i=0;i<strlen(a);i++){
    if(a[i]==b[j]){
        j++ ;
    }
}
if(j==7){
    printf("Yes") ;
}
else{
    printf("No") ;
}

}
