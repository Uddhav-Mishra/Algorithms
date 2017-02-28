#include<stdio.h>
int t = -1 ;
char a[2222] ;
int size(){return t+1 ;}

int isEmpty(){
return t<0 ;
}

char top(){
    return a[t] ;
}
void push(char x){
t++ ; a[t] = x ;
}
char pop(){
return a[t] ;t-- ;
}

int main(){
char s[2000];  int i,j ;
scanf("%s",s) ;
int ans = 0 ;
for(i=0;i<strlen(s);i++){
    if(s[i]=='('){
        push(s[i]) ;
       }
       else{
        if(!isEmpty()){
            pop() ;
        }
        else{
            ans++ ;
        }
       }
}
printf("%d\n",ans) ;
ans += size()/2 ;
printf("%d\n",ans) ;

}




