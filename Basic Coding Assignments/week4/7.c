#include<stdio.h>

int main(){
char s[2000] ;
int i,j,k,l ;

gets(s) ;

for(i=0;i<strlen(s);i++){
    if(s[i]!=' '&&s[i]!='\n'&&s[i]>='a'){
        s[i]-=32 ;
    }
}

printf("%s",s) ;
return 0 ;
}
