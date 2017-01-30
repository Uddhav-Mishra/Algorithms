#include<stdio.h>


void fn(char s){

if(s=='a'){printf("2") ;}
else if(s=='b'){ printf("22") ;}
else if(s=='c'){ printf("222") ;}
else if(s=='d'){ printf("3") ;}
else if(s=='e'){ printf("33") ;}
else if(s=='f'){ printf("333") ;}
else if(s=='g'){ printf("4") ;}
else if(s=='h'){ printf("44") ;}
else if(s=='i'){ printf("444") ;}
else if(s=='j'){ printf("5") ;}
else if(s=='k'){ printf("55") ;}
else if(s=='l'){ printf("555") ;}
else if(s=='m'){ printf("6") ;}
else if(s=='n'){ printf("66") ;}
else if(s=='o'){ printf("666") ;}
else if(s=='p'){ printf("7") ;}
else if(s=='q'){ printf("77") ;}
else if(s=='r'){ printf("777") ;}
else if(s=='s'){ printf("7777") ;}
else if(s=='t'){ printf("8") ;}
else if(s=='u'){ printf("88") ;}
else if(s=='v'){ printf("888") ;}
else if(s=='w'){ printf("9") ;}
else if(s=='x'){ printf("99") ;}
else if(s=='y'){ printf("999") ;}
else if(s=='z'){ printf("9999") ;}
else if(s==' '){ printf("0") ;}
}

int main(){

int i,j,k,lo,hi,md,m,n,ans1,ans2 ;
char a[2000] ;

gets(a) ;
fn(a[0]) ;
for(i=1;i<strlen(a);i++){
    if(a[i]==a[i-1]){printf(" ") ;}
    fn(a[i]);
}

}
