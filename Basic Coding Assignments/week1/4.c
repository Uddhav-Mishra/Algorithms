#include<stdio.h>
#include<string.h>

int main(){
    char a[200] ;
    int i,j,k ;
gets(a);

for(i=0;i<strlen(a);i++){
        if(a[i]!=' '){
   if(a[i]=='a'){a[i] = 'x' ;}
   else if(a[i]=='b'){   a[i] = 'y' ; }
   else if(a[i]=='c'){   a[i] = 'z' ;   }
   else{a[i]-=3; }}
}

j = 0 ;
for(i=0;i<=strlen(a);i++){

    if(a[i]==' '||a[i]=='\0'){
        k = i-1 ;
        while(k>=j){
            printf("%c",a[k]) ;
            k--;
        }
        printf(" ") ;
                j=i+1 ;
    }
}

return 0;

}


/*#include<stdio.h>
#include<string.h>

int main(){
    char a[200] ;
    int i,j,k ;
gets(a);

for(i=0;i<strlen(a);i++){
        if(a[i]!=' '){
   if(a[i]=='a'){a[i] = 'x' ;}
   else if(a[i]=='b'){   a[i] = 'y' ; }
   else if(a[i]=='c'){   a[i] = 'z' ;   }
   else{a[i]-=3; }}
}

j = 0 ;
for(i=0;i<strlen(a);i++){

    if(a[i]==' '){
        k = i-1 ;
        while(k>=j){
            printf("%c",a[k]) ;
            k--;
        }
        printf(" ") ;
                j=i+1 ;
    }
}
--i ;
while(a[i]!=' '){
     printf("%c",a[i]) ;
    i--;
}
return 0;
}
*/
