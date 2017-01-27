#include<stdio.h>

int strlen(char *str){
    int i= 0;
while(*str!='\0'){
    i++; str++ ;
}
return i ;
}

char *strcpy(char *dest,char *src){     //  B

char *dest1 = dest ;

while(*src!='\0'){
    *dest = *src ; src++ ; dest++;
}
*dest = '\0' ;
return dest1 ;

}

char *strcat(char *dest,char *src){
char *dest1 = dest ;
while(*dest!='\0'){ dest++ ;}
while(*src!='\0'){
    *dest = *src ; src++ ; dest++;
}
*dest = '\0' ;
return dest1 ;
}

int strend(char *s, char *t){

int x = strlen(s) ; int y = strlen(t) ;
int i = x-1;
int j = t-1; int  flag = 1  ;
while(j>=0){
    if(t[j]!=s[i]){
        flag = 0 ; break;
    }
}
return flag ;
}

int palindrome(char *s){
int i = 0 ; int j = strlen(s)-1 ;
while(i<j){
    if(s[i]!=s[j]){ return 0 ;}
    i++;j--;
}
return 1 ;
}

char *reverse(char *s){

int i,j,k ;
char *s1,*s2 ;
s1 = s ;
for(i=0;i<n;i++)s1++;

for(i=n-2;i>=0;i--){
    *s1 = *s
}

}



int main(){

char a[100],b[100];

//gets(a) ;  A

//char *c = strcpy(b,a) ;
//printf("%s",c) ;          B

/*scanf("%s",a) ;
scanf("%s",b) ;
char *c = strcat(b,a) ;    C
printf("%s",c) ;    */

/*
scanf("%s",a) ;
scanf("%s",b) ;
printf("%d",strend(a,b)) ; */

scanf("%s",a) ;
if(palindrome(a))printf("yes");
else{printf("no") ; }


return 0 ;
}
