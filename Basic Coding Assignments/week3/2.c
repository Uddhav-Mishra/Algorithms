#include<stdio.h>

int main(){
int n,i,j,k,ans,x ;
char s[200],a[20] ;

gets(s) ;
for(i=0;i<strlen(s);i++){
    if(s[i]>=97){s[i] -= 32;}
}
for(i=0;i<strlen(s);i++){
if(i!=0&&s[i-1]!=' '){

if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='H'||s[i]=='W'||s[i]=='Y'){s[i] = '0' ;}
else if(s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V'){            s[i] = '1' ;     }
else if(s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z'){     s[i] = '2' ;}
else if(s[i]=='D'||s[i]=='T'){s[i] = '3' ;}
else if(s[i]=='L'){s[i] = '4' ;}
else if(s[i]=='M'||s[i]=='N'){s[i] = '5' ;}
else if(s[i]=='R'){s[i] = '6' ;}
}
}
for(i=0;i<strlen(a);i++){
if(i!=0&&a[i-1]!=' '){

if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='H'||a[i]=='W'||a[i]=='Y'){a[i] = '0' ;}
else if(a[i]=='B'||a[i]=='F'||a[i]=='P'||a[i]=='V'){  a[i] = '1' ;     }
else if(a[i]=='C'||a[i]=='G'||a[i]=='J'||a[i]=='K'||a[i]=='Q'||a[i]=='S'||a[i]=='X'||a[i]=='Z'){     a[i] = '2' ;}
else if(a[i]=='D'||a[i]=='T'){a[i] = '3' ;}
else if(a[i]=='L'){a[i] = '4' ;}
else if(a[i]=='M'||a[i]=='N'){a[i] = '5' ;}
else if(a[i]=='R'){a[i] = '6' ;}
}
}

b[0]=a[0] ;
i = 1 ;j=1;
while(i<strlen(a)){
    if(a[i]!=a[i-1]){ b[j]=a[i] ;j++;}
}




}


