#include<stdio.h>
#include<string.h>

int main(){

    char s[100] ;
    int a[300],flag[300] ;
    int i,j,k ;

    for(i=0;i<=300;i++){a[i]=0; flag[i]= 0 ;}

    gets(s) ;

    for(i=0;i<(int)strlen(s);i++){
        a[(int)s[i]]++ ;
    }

for(i=0;i<strlen(s);i++){
        if(a[s[i]]>0&&flag[s[i]]==0){
            flag[s[i]]=1 ; printf("%c %d\n",s[i],a[s[i]]) ;
        }
}
return 0 ;
}
