#include<stdio.h>
#include<string.h>
#include<stdio.h>

int a[300],b[300],t1=0,t2=0 ;

void push(int  x){
a[t1]=x ; t1++;
}

void pop(){
t1-- ;
}

int top(){
return a[t1-1] ;
}

int isEmpty(){
if(t1==0){return 1 ;}
return 0 ;
}

int isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z');
}

int pre(char ch)
{switch (ch)
    {
    case '+':return 1;
    case '-':return 2;
    case '*':return 3;
    case '/':return 4;
    case '^':return 5;
    }
    return -1;
}

int main(){
int i,j,k,l,n,m ;

char s[2000],ans[200] ;
k = 0 ;
scanf("%s",s) ;

n  = strlen(s) ;

for(i=0;i<n;i++){
    if(isOperand(s[i])){printf("%c",s[i]) ;}
    else if(s[i]=='('){ push(i) ;}
    else if(s[i]==')'){
        while(s[top()]!=')'){
           if(s[top()]!='('&&s[top()]!=')') printf("%c",s[top()]) ; pop() ;if(t1<=0){break;}
        }
        pop();
    }
    else{ if(t1>0){
        if(pre(s[top()])<pre(s[i])){
            while(pre(s[top()])>pre(s[i])){
            if(s[top()]!='('&&s[top()]!=')') printf("%c",s[top()]) ;pop() ; if(t1<=0){break;}
            }
            push(i) ;
        } }
    }

}


}



