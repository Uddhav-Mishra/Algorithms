#include<stdio.h>

int main(){

FILE *fp ;
int chars,lines,spaces,words ;
chars=0;lines=0;spaces = 0 ;

fp = fopen("input.txt","r") ;
char c ;
for( c = getc(fp);c!=EOF;c=getc(fp)){
    if(c=='\n'){lines++;}
    else if(c==' '){spaces++;}
    else{chars++;}
}

printf("No. Of lines = %d no.of spaces = %d no. of chars = %d",lines,spaces,chars) ;
fclose(fp) ;
return 0 ;
}
