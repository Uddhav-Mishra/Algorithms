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

int leaf_nodes(list *root){
if(root==NULL){return 0 ;}
if(root->left==NULL&&root->right==NULL){
    return 1 ;
}
else{
    return leaf_nodes(root->left)+leaf_nodes(root->right) ;
}
}

int total_nodes(list *root){
if(root==NULL){return 0 ;}
else{
return 1+total_nodes(root->left)+total_nodes(root->right) ;
}
}

int max(int x,int y){
if(x>y)return x;
return y ;
}

int height(list *root){
if(root==NULL){return 0 ;}
else{
return 1+max(height(root->left),height(root->right)) ;
}
}

list *search(list *root,int x){
if(x==root->item){return root ;}

if(x>root->item){return search(root->right,x) ;}
else{return search(root->left,x) ;}
}

void delete(list *root,int x){
list *p = search(root,x) ;
if(p->left==NULL&&p->right==NULL){
    if(p->parent->right==p){p->parent->right=NULL;}
    else{p->parent->left = NULL; } return ;
}
if(p->left==NULL){
    if(p->parent->left==p){
        p->parent->left = p->right ;
    }
    else{
        p->parent->right = p->right;
    }return ;
}
if(p->right==NULL){
    if(p->parent->left==p){
        p->parent->left = p->left ;
    }
    else{
        p->parent->right = p->left ;
    }return ;
}

list *k = p->left ;
while(k->right!=NULL){k=k->right;}
int y = k->item ;
delete(root,k->item) ;
p->item= y ;
}

list *inorder(list *root,int x){
if(root==NULL){return NULL;}
inorder(root->left,x) ;
if(root->item<=x){printf("%d ",root->item) ;}
inorder(root->right,x) ;
}


int main(){

list *root= NULL ;

 root = insert(root, 20);
  root = insert(root, 8);
  root = insert(root, 22);
  root = insert(root, 4);

//printf("no. of leaf nodes is %d no. of total = %d",leaf_nodes(root),total_nodes(root)) ;

list *k = inorder(root,53) ;
}





