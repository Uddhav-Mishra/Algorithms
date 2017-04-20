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

list *search(list *root,int x,int y){  //x<y
    int j = root->item ;
if(x<=j&&y>j){return root ;}

if(x>j&&y>j){return search(root->right,x,y);}
else{return search(root->left,x,y);}

}




int main(){

list *root= NULL ;

 root = insert(root, 25);
  root = insert(root, 20);
root = insert(root, 10);
 root = insert(root, 5);
  root = insert(root,23);
  root = insert(root, 21);
  root = insert(root, 30);
    root = insert(root, 35);
      root = insert(root, 32);

//printf("no. of leaf nodes is %d no. of total = %d",leaf_nodes(root),total_nodes(root)) ;

list *k = search(root,5,21) ; printf("%d\n",k->item) ;
  k = search(root,10,30) ; printf("%d\n",k->item) ;
   k = search(root,5,32) ; printf("%d\n",k->item) ;
  k = search(root,10,23) ; printf("%d\n",k->item) ;
}

