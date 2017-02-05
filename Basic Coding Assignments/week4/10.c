#include<stdio.h>

void reverseWords( char * str )
{
    int i = 0, j = 0;
    reverseString( str, strlen(str) );
    while( 1 )
    {
        if( *(str+j) == ' ' || *(str+j) == '\0') // Found a word or reached the end of sentence
        {
            reverseString( str+i, j-i );
            i = j+1;
        }
        if( *(str+j) == '\0')
        {
            break;
        }
        j++;
    }
}

 void reverseString(char* str, int len)
{
    int i, j;
    char temp;
    i=j=temp=0;

    j=len-1;
    for (i=0; i<j; i++, j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}

int main(){

char a[300] ;
gets(a) ;
reverseWords(a ) ;

puts(a) ;

}











/*#include<stdio.h>

int main(){
int i,j,k ;
char s[300];
gets(s) ;
j = strlen(s) ;
for(i=strlen(s)-1;i>=0;i--){
    if(s[i]==' '){
       for(k=i+1;k<j;k++){
        printf("%c",s[k]) ;
       } j=i ;
        printf(" ");
      }
}
i=0;
while(s[i]!=' '&&s[i]!='\0'){
    printf("%c",s[i]) ; i++;
}


return 0;

}
*/





