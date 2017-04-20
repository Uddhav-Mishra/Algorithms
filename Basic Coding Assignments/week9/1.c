#include<stdio.h>
#include<string.h>

int main(){

char s[100] ;
int a[300];
int i,j,k,n ;

for(i=0;i<=300;i++){a[i]=0;}

scanf("%s",s) ;


 n = strlen(s) ;
j = 0 ;
for(i=0;i<n;i++){
   if(a[s[i]]==0){   s[j] = s[i] ;   j++; }
   a[s[i]]++ ;
}
s[j] = '\0' ;

printf("%s",s) ;
return 0 ;

}
