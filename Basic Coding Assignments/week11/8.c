#include<stdio.h>
#include<string.h>
typedef struct list{
char item ;
struct list *left,*right  ;
}list ;



int search(char in[],int st,int end,char c){
int i ;
for(i=st;i<=end;i++){
    if(in[i]==c){return i ;}
    }
}
 char inorder[121],postorder[213] ;
 int j  ;
list *build(char post[],char in[],int st,int end){

if(st>end){return NULL;}

list *p = malloc(sizeof(list)) ;
p->item = post[j--] ;
 p->left = NULL ; p->right = NULL ;

if(st==end){return p ;}

int inindex = search(in,st,end,p->item) ;
p->right = build(post,in,inindex+1,end) ;
p->left = build(post,in,st,inindex-1) ;

return p ;

}

void preorder(list *k){
if(k==NULL){return;}
printf("%c ",k->item) ;
preorder(k->left) ;
preorder(k->right) ;
}


int main(){

scanf("%s",inorder) ;
  scanf("%s",postorder) ;
j = strlen(inorder)-1; int k = j ;
list *root = build(postorder,inorder,0,k) ;
preorder(root) ;

}

