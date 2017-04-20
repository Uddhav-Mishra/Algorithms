#include<stdio.h>
#include<string.h>


typedef struct list{
int item ;
struct list *left,*right ;
}list;

void inorder(list *node){
if(node==NULL){return  ;}
inorder(node->left) ;
printf("%d ",node->item) ;
inorder(node->right) ;
}

void preorder(list *node){
if(node==NULL){return  ;}
printf("%d ",node->item) ;
preorder(node->left) ;
preorder(node->right) ;
}

void postorder(list *node){
if(node==NULL){return  ;}
postorder(node->left) ;
postorder(node->right) ;
printf("%d ",node->item) ;
}

list *insert(int x){
list *p = malloc(sizeof(list)) ;
p->item = x ;p->left=NULL;p->right=NULL ;
return p ;
}

int main(){

list *root = insert(1) ;
root->left   = insert(2);
root->right   = insert(3);
root->left->left  = insert(4);
root->left->right  = insert(5);

preorder(root) ;printf("\n") ;
inorder(root) ;printf("\n") ;
postorder(root) ;printf("\n") ;
}
