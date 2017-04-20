#include<stdio.h>

typedef struct list{
int item ;
struct list *left,*right,*parent ;
}list ;

list *insert(list *root,int x){

list *p = malloc(sizeof(list)) ; p->item = x ;
if(root==NULL){
    p->left = NULL ;p->right = NULL ;
     p->parent = NULL ;return p ;
}
list *temp ;
if(x<=root->item){
    temp = insert(root->left,x) ;
    root->left = temp ;
    temp->parent = root;
}
else{
    temp = insert(root->right,x) ;
    root->right = temp ;
    temp->parent = root;
}
return root;
}
int maxi(list *root){
while(root->right!=NULL){
    root=root->right ;
}
return root->item;
}

int mini(list *root){
while(root->left!=NULL){
    root=root->left ;
}
return root->item;
}

int successor(list *root,list *k){

if(k->right!=NULL){return mini(k->right);}
list *p = k->parent ;
while(p!=NULL&&k==p->right){
    k=p ; p=p->parent ;
}
return p->item ;

}

int predessor(list *root,list *k){
if(k->left!=NULL){return maxi(k->left); }
list *p = k->parent ;
while(p!=NULL&&k==p->left){
    k=p; p=p->parent ;
}
return p->item ;
}

int main(){

list *root= NULL ;

 root = insert(root, 20);
  root = insert(root, 8);
  root = insert(root, 22);
  root = insert(root, 4);
  root = insert(root, 12);
  root = insert(root, 10);
  root = insert(root, 14);
list *temp = root->left->right->right ;

printf("sucessor of %d is %d",temp->item,successor(root,temp)) ;
return 0 ;
}






















/*#include<stdio.h>
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



*/
